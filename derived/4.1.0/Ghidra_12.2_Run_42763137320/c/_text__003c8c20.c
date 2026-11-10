/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8c20; name: FUN_.text__003c8c20
 */


void FUN__text__003c8c20(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  FUN__text__00163fb4(*(undefined8 *)(param_1 + 0x2e0),*(undefined8 *)(param_1 + 0x2f0),
                      *(undefined8 *)(param_1 + 0x2e8));
  uVar6 = *(undefined8 *)(param_1 + 0x2f0);
  lVar2 = FUN__text__001352f0(param_1,param_2);
  lVar4 = 0;
  do {
    lVar1 = param_1 + lVar4;
    if (*(long *)(lVar1 + 0x308) == lVar2) {
      puVar5 = (undefined8 *)(lVar1 + 0x300);
      goto LAB__text__003c8cf8;
    }
    if (*(long *)(lVar1 + 0x318) == lVar2) {
      puVar5 = (undefined8 *)(lVar1 + 0x310);
      goto LAB__text__003c8cf8;
    }
    if (*(long *)(lVar1 + 0x328) == lVar2) {
      puVar5 = (undefined8 *)(lVar1 + 800);
      goto LAB__text__003c8cf8;
    }
    if (*(long *)(lVar1 + 0x338) == lVar2) {
      puVar5 = (undefined8 *)(lVar1 + 0x330);
      goto LAB__text__003c8cf8;
    }
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x1000);
  lVar4 = 0;
  while( true ) {
    lVar1 = param_1 + lVar4;
    if (*(long *)(lVar1 + 0x308) == 0) {
      puVar5 = (undefined8 *)(lVar1 + 0x300);
      *(long *)(lVar1 + 0x308) = lVar2;
      goto LAB__text__003c8cf8;
    }
    if (*(long *)(lVar1 + 0x318) == 0) break;
    if (*(long *)(lVar1 + 0x328) == 0) {
      puVar5 = (undefined8 *)(lVar1 + 800);
      *(long *)(lVar1 + 0x328) = lVar2;
      goto LAB__text__003c8cf8;
    }
    if (*(long *)(lVar1 + 0x338) == 0) {
      puVar5 = (undefined8 *)(lVar1 + 0x330);
      *(long *)(lVar1 + 0x338) = lVar2;
      goto LAB__text__003c8cf8;
    }
    lVar4 = lVar4 + 0x40;
    if (lVar4 == 0x1000) goto code_r0x003c8cd4;
  }
  puVar5 = (undefined8 *)(lVar1 + 0x310);
  *(long *)(lVar1 + 0x318) = lVar2;
LAB__text__003c8cf8:
  uVar3 = *puVar5;
LAB__text__003c8cfc:
  FUN__text__0015aae0(lVar2,uVar6,uVar3,param_3,*(undefined4 *)(param_1 + 0x2f8));
  return;
code_r0x003c8cd4:
  uVar3 = 0;
  goto LAB__text__003c8cfc;
}


