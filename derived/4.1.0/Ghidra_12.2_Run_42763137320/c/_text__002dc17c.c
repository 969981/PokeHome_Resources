/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc17c; name: FUN_.text__002dc17c
 */


uint FUN__text__002dc17c(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = param_1[0x2c] & 0xf;
  lVar7 = *(long *)(param_1[0x1f] + ((ulong)param_1[0x2c] >> 1 & 0x7ffffffffffffff8));
  lVar6 = lVar7 + uVar8 * 0x120;
  uVar3 = FUN__text__002f0b64();
  uVar1 = FUN__text__002fa568(uVar3,lVar6);
  if ((uVar1 & 1) != 0) {
    iVar2 = FUN__text__002fa5d8(uVar3,lVar6);
    if (iVar2 == 2) {
      FUN__text__002fa648(uVar3,lVar6);
      FUN__text__002fa6b8(uVar3,lVar6);
      *(undefined4 *)(param_1 + 1) = 0;
      lVar6 = 7;
      puVar4 = (undefined8 *)(lVar7 + uVar8 * 0x120 + 0x20);
      pcVar5 = (code *)*puVar4;
    }
    else {
      FUN__text__002fa6b8(uVar3,lVar6);
      *(undefined4 *)(param_1 + 1) = 0;
      lVar6 = 8;
      puVar4 = (undefined8 *)(lVar7 + uVar8 * 0x120 + 0xa0);
      pcVar5 = (code *)*puVar4;
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(puVar4 + 4);
    }
    (**(code **)(*param_1 + lVar6 * 8))(param_1);
    FUN__text__002ddf20(param_1 + 0x1e);
  }
  return uVar1 & 1;
}


