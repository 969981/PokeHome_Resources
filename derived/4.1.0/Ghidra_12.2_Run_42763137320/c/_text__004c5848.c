/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5848; name: FUN_.text__004c5848
 */


void FUN__text__004c5848(undefined8 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                        undefined4 param_5,uint param_6,uint param_7)

{
  size_t __n;
  char *__dest;
  size_t sVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar2 & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN__text__00400fc0(0);
    uVar2 = *(ushort *)((long)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar2 & 0xf800;
  *(undefined4 *)(param_1 + 3) = param_3;
  if (param_4 != (char *)0x0) {
    __n = strlen(param_4);
    __dest = (char *)FUN__text__00400f80(0,__n + 1);
    param_1[2] = __dest;
    if (__dest != (char *)0x0) {
      sVar1 = strlen(param_4);
      if (sVar1 + 1 <= __n) {
        __n = sVar1 + 1;
      }
      strncpy(__dest,param_4,__n);
      __dest[__n] = '\0';
    }
  }
  *(undefined4 *)((long)param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = 0x100;
  if ((param_7 & 1) == 0) {
    uVar2 = 0;
  }
  *(undefined4 *)param_1 = param_2;
  uVar3 = 0x280;
  if ((param_6 & 1) == 0) {
    uVar3 = 0x80;
  }
  *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xf800 | uVar3 | uVar2 | 4;
  return;
}


