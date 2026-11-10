/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ca10; name: FUN_.text__0015ca10
 */


void FUN__text__0015ca10(long param_1,int param_2,ushort param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *(ushort *)(param_1 + 0x19c) = param_3 & 1;
  uVar1 = FUN__text__0016a510();
  if (((uVar1 & 0xff) < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x8bcU) != 0)) {
    lVar4 = (long)param_2 * 4;
    puVar3 = (undefined4 *)(lVar4 + 0x724c30);
    puVar2 = (undefined4 *)(lVar4 + 0x724c00);
    if ((param_3 & 1) == 0) {
      puVar3 = (undefined4 *)(lVar4 + 0x724a50);
      puVar2 = (undefined4 *)(lVar4 + 0x724bb0);
    }
  }
  else {
    lVar4 = (long)param_2 * 4;
    puVar3 = (undefined4 *)(lVar4 + 0x724a50);
    puVar2 = (undefined4 *)(lVar4 + 0x724830);
    if ((param_3 & 1) != 0) {
      puVar3 = (undefined4 *)(lVar4 + 0x724c30);
      puVar2 = (undefined4 *)(lVar4 + 0x7249a0);
    }
  }
  FUN__text__005f4f7c(param_1,*puVar3,*puVar2);
  return;
}


