/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001db410; name: FUN_.text__001db410
 */


void FUN__text__001db410(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int local_130;
  uint auStack_12c [25];
  int local_c8 [26];
  
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 == 0) {
LAB__text__001db728:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  piVar2 = (int *)(param_1 + 0x8b3c);
  puVar3 = (undefined8 *)(param_1 + 0x89c8);
  if (*(char *)(param_1 + 0x8ba0) != '\0') {
    lVar13 = *(long *)(lVar14 + 0x138);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    puVar1 = (undefined8 *)(param_1 + 0x89f0);
    uVar10 = FUN__text__0019cc24(lVar13,param_1 + 0x89e8,puVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
      }
      iVar7 = FUN__text__0019b770(*puVar1);
      if (iVar7 != 0) {
        uVar10 = tpidr_el0;
        uVar10 = uVar10 & 0xffffffffffffe000;
        iVar5 = 0;
        do {
          while( true ) {
            iVar15 = iVar5;
            uVar9 = auStack_12c[0];
            lVar11 = *(long *)(param_1 + 0x89d0);
            auStack_12c[0] = auStack_12c[0] & 0xffffff00;
            puVar4 = (ulong *)(*(long *)(lVar11 + 0xe0) + *(long *)(lVar11 + 0xe8) * 8);
            local_130 = iVar15;
            if (*(long *)(lVar11 + 0xe8) == *(long *)(lVar11 + 0xf0)) break;
            if (*(long *)(uVar10 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
              FUN__text__00102c10();
            }
            *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) =
                 *(undefined8 *)(lVar11 + 0xa0);
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            *puVar4 = CONCAT44(uVar9,iVar15) & 0xffffff00ffffffff;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
            *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
            iVar5 = iVar15 + 1;
            if (iVar7 == iVar15 + 1) goto LAB__text__001db544;
          }
          FUN__text__001de570(local_c8,lVar11 + 0xa0,puVar4,1,&local_130);
          iVar5 = iVar15 + 1;
        } while (iVar7 != iVar15 + 1);
      }
LAB__text__001db544:
      FUN__text__003b17ec(*puVar3,0,0);
      FUN__text__003b17f8(*puVar3,0);
      FUN__text__003ad2d0(*puVar3,0);
      *(undefined2 *)(param_1 + 0x8ba1) = 0x101;
      uVar8 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89e8));
      *(undefined4 *)(param_1 + 0x8ba4) = uVar8;
      uVar8 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89f0));
      *(undefined4 *)(param_1 + 0x8ba8) = uVar8;
      FUN__text__0019c35c(&local_130);
      FUN__text__0019a14c(puVar1,&local_130);
      uVar10 = FUN__text__0019c518(piVar2,&local_130);
      if ((uVar10 & 1) == 0) {
        FUN__text__0019cd08(lVar13,piVar2,*(undefined1 *)(param_1 + 0x8ba3));
        *(bool *)(param_1 + 0x8ba1) = *piVar2 == local_130;
        bVar6 = FUN__text__0019c1d8(param_1 + 0x8b40,auStack_12c);
        *(undefined1 *)(param_1 + 0x8ba3) = 0;
        *(byte *)(param_1 + 0x8ba2) = bVar6 & 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x8ba0) = 0;
      }
      FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar2);
      FUN__text__0019c35c(local_c8);
      FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar2 != local_c8[0]);
      FUN__text__001db72c(param_1);
      FUN__text__001d9160(*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x8ba8) != 0);
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x718), lVar11 == 0)) ||
         (*(long *)(lVar11 + 0x168) == 0)) goto LAB__text__001db728;
      iVar7 = FUN__text__001c693c();
      FUN__text__001d911c(*(undefined8 *)(param_1 + 0x40),iVar7 != 0);
    }
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (*(char *)(param_1 + 0x8a08) == '\0') {
    if (*(char *)(param_1 + 0x8b38) == '\0') {
      FUN__text__0019c35c(local_c8);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN__text__0019c518(param_1 + 0x8b3c,local_c8);
      FUN__text__001d90e8(uVar12,(uVar9 ^ 0xffffffff) & 1);
    }
    else {
      FUN__text__0019c35c(local_c8);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN__text__0019c518(param_1 + 0x8b3c,local_c8);
      FUN__text__001d91a4(uVar12,(uVar9 ^ 0xffffffff) & 1);
    }
  }
  else {
    FUN__text__001d8f78(*(undefined8 *)(param_1 + 0x40),**(int **)(lVar14 + 0x50) != 0);
  }
  return;
}


