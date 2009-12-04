/* mx-frame.h */

#ifndef _MX_FRAME_H
#define _MX_FRAME_H

#include "mx-bin.h"

G_BEGIN_DECLS

#define MX_TYPE_FRAME mx_frame_get_type()

#define MX_FRAME(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
  MX_TYPE_FRAME, MxFrame))

#define MX_FRAME_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
  MX_TYPE_FRAME, MxFrameClass))

#define MX_IS_FRAME(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
  MX_TYPE_FRAME))

#define MX_IS_FRAME_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
  MX_TYPE_FRAME))

#define MX_FRAME_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
  MX_TYPE_FRAME, MxFrameClass))

typedef struct _MxFrame MxFrame;
typedef struct _MxFrameClass MxFrameClass;
typedef struct _MxFramePrivate MxFramePrivate;

struct _MxFrame
{
  MxBin parent;

  MxFramePrivate *priv;
};

struct _MxFrameClass
{
  MxBinClass parent_class;
};

GType mx_frame_get_type (void) G_GNUC_CONST;

ClutterActor *mx_frame_new (void);

G_END_DECLS

#endif /* _MX_FRAME_H */