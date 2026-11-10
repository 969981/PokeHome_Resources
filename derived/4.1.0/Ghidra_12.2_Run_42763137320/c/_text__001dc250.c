/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc250; name: FUN_.text__001dc250
 */


void FUN__text__001dc250(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long local_138;
  undefined1 auStack_12c [100];
  long local_c8 [13];
  int local_48;
  uint uStack_44;
  
  piVar1 = (int *)(param_1 + 0x8b3c);
  FUN__text__0019c35c(auStack_12c);
  if ((*(char *)(param_1 + 0x8ba0) == '\0') &&
     (uVar8 = FUN__text__0019c518(param_1 + 0x8b3c,auStack_12c), (uVar8 & 1) != 0)) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x138);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    puVar2 = (undefined8 *)(param_1 + 0x89c8);
    FUN__text__0019cbec(lVar10);
    local_138 = *(long *)(lVar11 + 0x158);
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x10))();
    }
    FUN__text__00196fbc(&local_138,(long *)(param_1 + 0x89e8));
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    local_c8[0] = *(long *)(param_1 + 0x89e8);
    if (local_c8[0] != 0) {
      (**(code **)(*(long *)(local_c8[0] + 0x48) + 0x10))();
    }
    FUN__text__00197440(local_c8,(undefined8 *)(param_1 + 0x89f0));
    if (local_c8[0] != 0) {
      (**(code **)(*(long *)(local_c8[0] + 0x48) + 0x18))();
    }
    FUN__text__0019c3e4(piVar1);
    *(undefined2 *)(param_1 + 0x8ba0) = 0x100;
    *(undefined1 *)(param_1 + 0x8ba2) = 1;
    uVar6 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89e8));
    *(undefined4 *)(param_1 + 0x8ba4) = uVar6;
    uVar6 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89f0));
    *(undefined4 *)(param_1 + 0x8ba8) = uVar6;
    *(undefined1 *)(param_1 + 0x89f8) = 0;
    *(undefined1 *)(param_1 + 0x8ba3) = 1;
    if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
    }
    iVar7 = FUN__text__0019b770(*(undefined8 *)(param_1 + 0x89f0));
    if (iVar7 != 0) {
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      iVar5 = 0;
      do {
        while( true ) {
          iVar12 = iVar5;
          uVar4 = uStack_44;
          lVar9 = *(long *)(param_1 + 0x89d0);
          uStack_44 = uStack_44 & 0xffffff00;
          puVar3 = (ulong *)(*(long *)(lVar9 + 0xe0) + *(long *)(lVar9 + 0xe8) * 8);
          local_48 = iVar12;
          if (*(long *)(lVar9 + 0xe8) == *(long *)(lVar9 + 0xf0)) break;
          if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10();
          }
          *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(lVar9 + 0xa0);
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          *puVar3 = CONCAT44(uVar4,iVar12) & 0xffffff00ffffffff;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
          *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
          iVar5 = iVar12 + 1;
          if (iVar7 == iVar12 + 1) goto LAB__text__001dc444;
        }
        FUN__text__001de570(local_c8,lVar9 + 0xa0,puVar3,1,&local_48);
        iVar5 = iVar12 + 1;
      } while (iVar7 != iVar12 + 1);
    }
LAB__text__001dc444:
    FUN__text__003b17ec(*puVar2,0,0);
    FUN__text__003b17f8(*puVar2,0);
    FUN__text__003ad2d0(*puVar2,0);
    FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar1);
    FUN__text__0019c35c(local_c8);
    FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar1 != (int)local_c8[0]);
    FUN__text__001db72c(param_1);
    FUN__text__001d9160(*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x8ba8) != 0);
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x718), lVar9 != 0)) &&
       (*(long *)(lVar9 + 0x168) != 0)) {
      iVar7 = FUN__text__001c693c();
      FUN__text__001d911c(*(undefined8 *)(param_1 + 0x40),iVar7 != 0);
      FUN__text__0019c3e4(*(undefined8 *)(lVar11 + 0xd8));
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


