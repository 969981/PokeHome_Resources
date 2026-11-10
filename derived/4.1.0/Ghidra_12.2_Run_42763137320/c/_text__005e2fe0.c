/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2fe0; name: FUN_.text__005e2fe0
 */


void FUN__text__005e2fe0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar8 = (undefined8 *)(param_2 + ((long)puVar7 - (long)param_4));
  puVar6 = puVar7;
  if (puVar8 < param_3) {
    uVar9 = tpidr_el0;
    uVar9 = uVar9 & 0xffffffffffffe000;
    lVar2 = *(long *)(uVar9 + 0x98);
    do {
      if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)((uVar9 | 0x18) + lVar2 * 8) = *(undefined8 *)(param_1 + 0x18);
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((code *)puVar8[3] != (code *)0x0) {
        (*(code *)puVar8[3])(puVar8 + 4,puVar6 + 4);
        uVar3 = puVar8[1];
        puVar6[3] = puVar8[3];
        uVar5 = puVar8[2];
        *puVar6 = *puVar8;
        puVar6[1] = uVar3;
        puVar6[2] = uVar5;
        pcVar4 = (code *)puVar8[1];
        if (pcVar4 != (code *)0x0) {
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          (*pcVar4)(puVar8 + 4);
        }
      }
      puVar8 = puVar8 + 0x10;
      puVar6 = puVar6 + 0x10;
      lVar2 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar2;
    } while (puVar8 < param_3);
  }
  *(undefined8 **)(param_1 + 8) = puVar6;
  if (puVar7 != param_4) {
    lVar2 = ((long)puVar7 - (long)param_4 >> 7) << 7;
    do {
      puVar8 = puVar7 + -0x10;
      pcVar4 = (code *)puVar7[-0xf];
      if (pcVar4 != (code *)0x0) {
        puVar7[-0xe] = 0;
        puVar7[-0xd] = 0;
        *puVar8 = 0;
        puVar7[-0xf] = 0;
        (*pcVar4)(puVar7 + -0xc);
      }
      lVar1 = param_2 + lVar2;
      if (*(code **)(lVar1 + -0x68) != (code *)0x0) {
        (**(code **)(lVar1 + -0x68))(lVar1 + -0x60,puVar7 + -0xc);
        uVar3 = *(undefined8 *)(lVar1 + -0x78);
        puVar7[-0xd] = *(undefined8 *)(lVar1 + -0x68);
        uVar5 = *(undefined8 *)(lVar1 + -0x70);
        *puVar8 = *(undefined8 *)(lVar1 + -0x80);
        puVar7[-0xf] = uVar3;
        puVar7[-0xe] = uVar5;
        pcVar4 = *(code **)(lVar1 + -0x78);
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0x70) = 0;
          *(undefined8 *)(lVar1 + -0x68) = 0;
          *(undefined8 *)(lVar1 + -0x80) = 0;
          *(undefined8 *)(lVar1 + -0x78) = 0;
          (*pcVar4)(lVar1 + -0x60);
        }
      }
      lVar2 = lVar2 + -0x80;
      puVar7 = puVar8;
    } while (lVar2 != 0);
  }
  return;
}


