/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d280; name: FUN_.text__0055d280
 */


undefined8 FUN__text__0055d280(long *param_1,long *param_2,undefined2 param_3,ushort param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(ushort *)((long)param_1 + 0xc) = param_4;
  *(undefined2 *)((long)param_1 + 0xe) = param_3;
  if (param_4 != 0) {
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_4 << 5,0x70bb37,0x24);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    lVar5 = 0;
    while( true ) {
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + lVar5);
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      if ((ulong)param_4 * 0x20 + -0x20 == lVar5) break;
      lVar4 = *param_1;
      lVar5 = lVar5 + 0x20;
    }
    uVar2 = (uint)param_4;
    lVar4 = 0;
    if ((param_4 & 0xfffe) == 0) {
      uVar2 = 1;
    }
    do {
      iVar3 = FUN__text__0055d3a4(*param_1 + lVar4,param_2,param_3,0);
      if (iVar3 != 1) {
        return 0x34;
      }
      lVar4 = lVar4 + 0x20;
    } while ((ulong)uVar2 * 0x20 != lVar4);
  }
  return 1;
}


