/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d05a8; name: FUN_.text__004d05a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004d05a8(undefined8 *param_1,undefined8 param_2,uint param_3,ushort param_4,
                   undefined4 param_5)

{
  void *__s;
  undefined8 *puVar1;
  size_t __n;
  
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0x11;
  __n = ((ulong)param_3 & 0xff) * 4 * (ulong)param_4;
  __s = (void *)FUN__text__00400f90(5,__n,0x10);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    *param_1 = __s;
    *(ushort *)(param_1 + 2) = param_4;
    *(undefined2 *)((long)param_1 + 0x12) = 0;
    *(uint *)(param_1 + 1) = param_3;
    puVar1 = (undefined8 *)FUN__text__00400f80(0,0x98);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined2 *)((long)puVar1 + 0x4c) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0;
      puVar1[5] = 0x3f80000000000000;
      puVar1[6] = 0xffff3f800000;
      *(undefined4 *)(puVar1 + 9) = 0x3f800000;
      puVar1[1] = 0;
      puVar1[2] = 0x3f800000;
      puVar1[3] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f800000;
      puVar1[8] = 0;
      *(undefined1 *)((long)puVar1 + 0x4e) = 1;
      puVar1[10] = 0x3f8000003f800000;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0x12) = 0x32;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      param_1[3] = puVar1;
      *puVar1 = param_2;
      *(undefined8 *)(param_1[3] + 0x58) = _DAT_008a47f0;
      *(undefined4 *)(param_1[3] + 0x70) = param_5;
      return 1;
    }
    param_1[3] = 0;
  }
  return 0x34;
}


