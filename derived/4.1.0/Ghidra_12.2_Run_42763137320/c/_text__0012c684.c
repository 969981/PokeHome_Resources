/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c684; name: FUN_.text__0012c684
 */


void FUN__text__0012c684(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_48 [8];
  
  plVar1 = (long *)(param_1 + 0x4b8);
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    plVar1 = (long *)(param_1 + 0x4d8);
  }
  lVar4 = *plVar1;
  uVar5 = *(ulong *)(lVar4 + 0x88);
  if (0xf < uVar5) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar7 = *(long *)(lVar4 + 0x80);
  puVar2 = (undefined8 *)(lVar7 + uVar5 * 0x110);
  if (uVar5 == *(ulong *)(lVar4 + 0x90)) {
    FUN__text__0012f7f0(auStack_48,(undefined8 *)(lVar4 + 0x40),puVar2,1,param_2);
    return;
  }
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
  lVar8 = lVar7 + uVar5 * 0x110;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  uVar3 = *param_2;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *puVar2 = uVar3;
  if ((code *)param_2[4] != (code *)0x0) {
    (*(code *)param_2[4])(param_2 + 6,lVar7 + uVar5 * 0x110 + 0x30);
    uVar3 = param_2[5];
    *(undefined8 *)(lVar8 + 0x18) = param_2[3];
    *(undefined8 *)(lVar8 + 0x28) = uVar3;
    uVar3 = param_2[2];
    *(undefined8 *)(lVar8 + 0x20) = param_2[4];
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
  }
  lVar8 = lVar7 + uVar5 * 0x110;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  if ((code *)param_2[0x14] != (code *)0x0) {
    (*(code *)param_2[0x14])(param_2 + 0x16,lVar7 + uVar5 * 0x110 + 0xb0);
    uVar3 = param_2[0x15];
    *(undefined8 *)(lVar8 + 0x98) = param_2[0x13];
    *(undefined8 *)(lVar8 + 0xa8) = uVar3;
    uVar3 = param_2[0x12];
    *(undefined8 *)(lVar8 + 0xa0) = param_2[0x14];
    *(undefined8 *)(lVar8 + 0x90) = uVar3;
  }
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  *(long *)(lVar4 + 0x88) = *(long *)(lVar4 + 0x88) + 1;
  return;
}


