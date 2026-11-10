/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670e7c; name: FUN_.text__00670e7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00670e7c(long param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  *param_2 = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1d0));
  memset((void *)(param_1 + 0xf0),0,0x578);
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  FUN__text__0065ca70(*(undefined8 *)(param_1 + 0xd8));
  FUN__text__0065ca7c(*(undefined8 *)(param_1 + 0xd8));
  *param_2 = 0;
  if (*(long *)(param_1 + 0xf48) == 0) {
    plVar9 = (long *)0x0;
    uVar12 = 3;
    goto LAB__text__00671208;
  }
  plVar9 = (long *)FUN__text__00678414(1,0x670);
  if (plVar9 != (long *)0x0) {
    lVar13 = *(long *)(*_DAT_008a6598 + 0x18);
    lVar10 = FUN__text__00678414(4,lVar13);
    if (lVar10 != 0) {
      plVar9[0x5e] = lVar10;
      plVar9[0x56] = lVar10 + lVar13;
      plVar9[0x53] = lVar10;
      plVar9[0xc] = -1;
      plVar9[0x32] = -1;
      plVar9[0x59] = lVar10 + lVar13 * 2;
      plVar9[0x5c] = lVar10 + lVar13 * 3;
      plVar9[0x84] = 0x89a288;
      plVar9[0x4b] = -1;
      *(undefined4 *)(plVar9 + 0x33) = 0xffffffff;
      plVar9[0x4c] = -1;
      FUN__text__00650d38(plVar9,1);
      auVar14 = FUN__text__0066c6a8();
      *(undefined1 (*) [16])(plVar9 + 0x49) = auVar14;
      auVar14 = FUN__text__0066c6a8();
      *(undefined1 (*) [16])(plVar9 + 0x87) = auVar14;
      lVar10 = *(long *)(param_1 + 0xf10);
      *plVar9 = param_1;
      plVar9[0x89] = lVar10;
      uVar12 = *(uint *)(param_1 + 0xc00);
      *(undefined4 *)(plVar9 + 0x27) = 4;
      *(uint *)(plVar9 + 0x2f) = uVar12;
      if ((*(char **)(param_1 + 0xd28) == (char *)0x0) || (**(char **)(param_1 + 0xd28) == '\0')) {
        uVar12 = 0;
        uVar8 = *(uint *)((long)plVar9 + 0x3fc) & 0xffffffef;
      }
      else {
        uVar8 = *(uint *)((long)plVar9 + 0x3fc) | 0x10;
        if (uVar12 < 2) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = (uint)(uVar12 == 2) << 5;
        }
      }
      uVar12 = uVar8 & 0xffffff9f | uVar12 | (uVar12 << 1 ^ 0x40) & (int)(uVar8 << 0x1b) >> 0x1f;
      *(uint *)((long)plVar9 + 0x3fc) = uVar12;
      if ((*(char **)(param_1 + 0xd30) != (char *)0x0) && (**(char **)(param_1 + 0xd30) != '\0')) {
        uVar12 = uVar12 | 0x50;
        *(uint *)((long)plVar9 + 0x3fc) = uVar12;
      }
      bVar6 = *(byte *)((long)plVar9 + 0x371);
      uVar8 = (uint)(*(long *)(param_1 + 0xdf8) != 0) << 8;
      uVar3 = uVar12 & 0xff | uVar8;
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfffffe00 | uVar3;
      uVar7 = (*(uint *)(param_1 + 0xf40) >> 10 & 1) << 0xe;
      uVar4 = uVar12 & 0xffff8000 | uVar12 & 0x3e00 | uVar3 | uVar7;
      *(uint *)((long)plVar9 + 0x3fc) = uVar4;
      uVar3 = uVar12 & 0x7f | (uint)(*(long *)(param_1 + 0xde0) != 0) << 7;
      *(uint *)((long)plVar9 + 0x3fc) =
           uVar12 & 0xffff8000 | uVar12 & 0x3e00 | uVar8 | uVar7 | uVar3;
      uVar8 = uVar4 & 0x1ff00 | uVar3 | (*(uint *)(param_1 + 0xf40) >> 0x1e & 1) << 0x11;
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfffc0000 | uVar8;
      uVar8 = uVar8 | (*(uint *)(param_1 + 0xf40) >> 0x1f) << 0x12;
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfff80000 | uVar8;
      bVar1 = (*(byte *)(param_1 + 0xac1) >> 2 & 1) << 2;
      bVar2 = bVar6 & 0xf8;
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar6 & 3 | bVar1;
      bVar5 = *(byte *)(param_1 + 0xac1) & 1;
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar6 & 2 | bVar1 | bVar5;
      bVar6 = *(byte *)((long)plVar9 + 0x3f1);
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar1 | bVar5 | *(byte *)(param_1 + 0xac1) & 2;
      bVar1 = (*(byte *)(param_1 + 0xb99) >> 2 & 1) << 2;
      bVar2 = bVar6 & 0xf8;
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar6 & 3 | bVar1;
      bVar5 = *(byte *)(param_1 + 0xb99) & 1;
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar6 & 2 | bVar1 | bVar5;
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar1 | bVar5 | *(byte *)(param_1 + 0xb99) & 2;
      plVar9[0x86] = *(long *)(param_1 + 0xc30);
      *(uint *)((long)plVar9 + 0x3fc) =
           (uint)(*(ulong *)(param_1 + 0xf40) >> 7) & 0x80000000 | uVar12 & 0x7ff80000 | uVar8;
      uVar11 = FUN__text__0065ab48(*(undefined8 *)(param_1 + 0xd8),1);
      if (((uVar11 & 1) == 0) || (plVar9[0x9d] != 0)) {
code_r0x00671160:
        FUN__text__00656b14(plVar9 + 0x95,&DAT__text__00673788);
        FUN__text__00656b14(plVar9 + 0x99,&DAT__text__00673788);
        if (*(long *)(param_1 + 0xcc0) != 0) {
          lVar10 = FUN__text__00678404();
          plVar9[0xc9] = lVar10;
          if (lVar10 == 0) goto LAB__text__006711c8;
        }
        *(undefined4 *)((long)plVar9 + 0x654) = *(undefined4 *)(param_1 + 0x704);
        *(undefined2 *)(plVar9 + 0xca) = *(undefined2 *)(param_1 + 0x700);
        plVar9[10] = *(long *)(param_1 + 0x768);
        plVar9[0xb] = *(long *)(param_1 + 0x770);
        FUN__text__006700b8(param_1);
        lVar10 = *(long *)(param_1 + 0xf28);
        if (lVar10 == 0) {
          lVar10 = FUN__text__0066e3d8();
          *(long *)(param_1 + 0x1548) = lVar10;
          if (lVar10 == 0) goto LAB__text__00671204;
        }
        else {
          *(long *)(param_1 + 0x1548) = lVar10;
        }
        if ((*(long *)(param_1 + 0xcb8) != 0) &&
           (uVar11 = FUN__text__0066e310(*(undefined8 *)(param_1 + 0xf48),0,8), (uVar11 & 1) == 0))
        {
          if ((*(byte *)(param_1 + 0xf68) & 1) != 0) {
            FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf48));
          }
          lVar13 = FUN__text__00659a28(0x70ca5a,*(undefined8 *)(param_1 + 0xcb8),
                                       *(undefined8 *)(param_1 + 0xf48));
          if (lVar13 == 0) goto LAB__text__00671204;
          *(long *)(param_1 + 0xf48) = lVar13;
          *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 1;
        }
        if (*(long *)(param_1 + 0xf28) == 0) {
          uVar12 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x20);
          uVar8 = FUN__text__0066e9e4(lVar10,0,*(undefined8 *)(param_1 + 0xf48),
                                      uVar12 >> 0xc & 0x10 | uVar12 >> 0x12 & 0x20 | 0x208);
          uVar12 = 3;
          if (uVar8 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00671368 */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*(code *)((ulong)*(byte *)((ulong)uVar8 + 0x760cd1) * 4 + 0x671204))();
            return uVar11;
          }
        }
        else {
          uVar8 = FUN__text__0066e580(lVar10,1,param_1 + 0x1550,0);
          uVar12 = 3;
          if (uVar8 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x006712d0 */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*(code *)((ulong)*(byte *)((ulong)uVar8 + 0x760cda) * 4 + 0x671204))();
            return uVar11;
          }
        }
        goto LAB__text__00671208;
      }
      lVar10 = FUN__text__00678414(0x4000,1);
      plVar9[0x9d] = lVar10;
      if (lVar10 != 0) goto code_r0x00671160;
LAB__text__006711c8:
      FUN__text__00656c1c(plVar9 + 0x95,0);
      FUN__text__00656c1c(plVar9 + 0x99,0);
      FUN__text__006783e4(plVar9[0x9d]);
      FUN__text__006783e4(plVar9[0xc9]);
      FUN__text__006783e4(plVar9[0x5e]);
    }
    FUN__text__006783e4(plVar9);
    plVar9 = (long *)0x0;
  }
LAB__text__00671204:
  uVar12 = 0x1b;
LAB__text__00671208:
  if (uVar12 != 0x59) {
    if ((plVar9 == (long *)0x0) || (uVar12 == 0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        FUN__text__0065ab60(param_1,plVar9);
      }
    }
    else {
      FUN__text__00670414(param_1,plVar9,1);
    }
  }
  return (ulong)uVar12;
}


