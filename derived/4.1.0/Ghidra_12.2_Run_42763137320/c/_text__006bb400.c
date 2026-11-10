/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb400; name: FUN_.text__006bb400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bb400(undefined1 param_1 [16],float param_2,long param_3,long param_4,
                        long param_5,long param_6)

{
  void *__dest;
  long lVar1;
  undefined8 uVar2;
  void *__src;
  float fVar3;
  float __x;
  float fVar4;
  float local_54;
  float local_28;
  float local_24;
  
  __dest = (void *)(*(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0xc));
  uVar2 = FUN__text__006b4514();
  __src = (void *)FUN__text__006add38(uVar2,param_4);
  memcpy(__dest,__src,0x230);
  local_28 = (float)FUN__text__006b2e38(param_3);
  local_54 = *(float *)(param_5 + 0xe4);
  fVar3 = 0.0;
  local_24 = param_2;
  FUN__text__006c1ba0(0,0x42c80000,&local_54);
  fVar4 = 0.0;
  if (0.0 < *(float *)(param_5 + 0xe4)) {
    __x = *(float *)(param_5 + 0xe0) * (*_DAT_008a02c8 / *_DAT_008a02d0);
    fVar3 = cosf(__x);
    fVar4 = -(fVar3 * local_54);
    local_28 = local_28 + fVar4;
    fVar3 = sinf(__x);
    fVar3 = -(fVar3 * local_54);
    local_24 = local_24 + fVar3;
  }
  FUN__text__0069d970(fVar4 / *(float *)(param_3 + 0x50),-fVar3 / *(float *)(param_3 + 0x54),param_4
                      ,__dest,&local_28,(float *)(param_3 + 0x50),*(undefined1 *)(param_3 + 0xf1),
                      *(undefined8 *)(param_3 + 0xf8));
  *(undefined8 *)((long)__dest + 0xd0) = 0x3f8000003f800000;
  *(undefined8 *)((long)__dest + 0xd8) = 0x3f8000003f800000;
  lVar1 = *(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0x10);
  uVar2 = FUN__text__006bac98(param_3,lVar1,param_5);
  *(undefined4 *)(lVar1 + 0x7c) = 0;
  FUN__text__006bb00c(uVar2,*(undefined4 *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0xe0),
                      *(undefined4 *)(param_5 + 0xe4),param_3,lVar1,*(byte *)(param_5 + 4) >> 4 & 1,
                      *(byte *)(param_5 + 4) >> 5 & 1,*(undefined1 *)(param_5 + 10),param_5 + 0xd0,
                      *(undefined1 *)(param_5 + 0xb),1);
  *(undefined8 *)(lVar1 + 0xbc) = 0xbf80000000000000;
  return;
}


