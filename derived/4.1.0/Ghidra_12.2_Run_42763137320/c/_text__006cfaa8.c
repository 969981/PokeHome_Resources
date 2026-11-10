/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cfaa8; name: FUN_.text__006cfaa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006cfaa8(long *param_1,long param_2,long param_3,long param_4)

{
  void *__s;
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  lVar3 = _DAT_008a6af0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = lVar3 + 0x10;
  FUN__text__006ce130(param_1 + 8,param_4);
  param_1[0x11] = param_4;
  param_1[0x12] = (long)(param_1 + 0x12);
  param_1[0x13] = (long)(param_1 + 0x12);
  *param_1 = 0x89ec28;
  lVar3 = *(long *)(param_2 + 0xb0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = lVar3;
  param_1[0x15] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x3dcccccd00000000;
  uVar2 = *(ushort *)(param_2 + 0xac);
  if (uVar2 != 0) {
    *(uint *)((long)param_1 + 0xc4) = (uint)uVar2;
    param_1[0x16] = *(long *)(param_2 + 0xa0);
    __s = (void *)(*(long *)(param_4 + 0x10) + 0xfU & 0xfffffffffffffff0);
    *(void **)(param_4 + 0x10) = (void *)((long)__s + (ulong)uVar2 * 0x40);
    if (__s != (void *)0x0) {
      memset(__s,0,(ulong)uVar2 * 0x40);
    }
    param_1[0x17] = (long)__s;
  }
  return;
}


