/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002671d0; name: FUN_.text__002671d0
 */


void FUN__text__002671d0(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  memcpy(auStack_158,(void *)0x72ce70,0xf0);
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_150);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_148);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_140);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_138);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_130);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_128);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_120);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_118);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_110);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_108);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_100);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_f8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_f0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_e8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_e0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_d8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_d0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_c8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_c0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_b8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_b0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_a8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_a0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_98);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_90);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_88);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_80);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_78);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_70);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  lVar2 = FUN__text__00321ac0();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar2 = FUN__text__00321ac0();
  pbVar1 = &DAT__text__00193772 + lVar2;
  bVar7 = *pbVar1;
  uVar4 = (ulong)bVar7;
  if (bVar7 < 0x1f) {
    if (bVar7 == 0) {
      bVar7 = 0;
      goto LAB__text__002675a4;
    }
  }
  else {
    uVar4 = 0x1e;
    *pbVar1 = 0x1e;
  }
  uVar9 = 0;
  uVar8 = 0;
  piVar5 = (int *)(&DAT__text__00193774 + lVar2);
  do {
    if (*piVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar2 = param_1 + uVar8 * 0x660 + 0x6d0;
      uVar3 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158 + uVar8 * 8);
      FUN__text__003d13e8(lVar2,uVar6,uVar3,0);
      FUN__text__003d2848(lVar2,piVar5,0);
      lVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),auStack_158 + uVar8 * 8);
      uVar8 = (ulong)((int)uVar8 + 1);
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
      uVar4 = (ulong)*pbVar1;
    }
    bVar7 = (byte)uVar8;
    uVar9 = uVar9 + 1;
    piVar5 = piVar5 + 7;
  } while (uVar9 < uVar4);
LAB__text__002675a4:
  *pbVar1 = bVar7;
  return;
}


