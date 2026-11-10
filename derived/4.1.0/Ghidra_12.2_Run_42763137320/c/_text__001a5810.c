/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5810; name: FUN_.text__001a5810
 */


undefined8 FUN__text__001a5810(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  char local_74 [4];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_48;
  uint uStack_44;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar4 = *(uint *)(param_1 + 0x50);
  if (uVar6 <= uVar4) {
    uVar5 = *(uint *)(param_1 + 0x4c);
    if (uVar5 < *(uint *)(param_1 + 0x44)) {
      do {
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
    else {
      do {
        uVar8 = *(uint *)(param_1 + 0x44);
        if (uVar8 <= uVar5) {
          do {
            if (((((*(char *)(param_1 + (ulong)uVar6 + (ulong)uVar8 + (ulong)uVar8 * 4 + 0x54) !=
                    '\0') &&
                  (local_48 = uVar8, uStack_44 = uVar6,
                  FUN__text__00191328(local_74,param_1 + 0x20,&local_48), local_74[0] == *param_2))
                 && (local_70 == *(int *)(param_2 + 4))) &&
                ((local_6c == *(int *)(param_2 + 8) && (local_68 == *(int *)(param_2 + 0xc))))) &&
               (local_64 == *(int *)(param_2 + 0x10))) {
              return 1;
            }
            uVar5 = *(uint *)(param_1 + 0x4c);
            uVar8 = uVar8 + 1;
          } while (uVar8 <= uVar5);
          uVar4 = *(uint *)(param_1 + 0x50);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar3 = FUN__text__00195358(uVar7,param_2);
  if (lVar3 != 0) {
    uVar6 = *(uint *)(param_1 + 0x48);
    uVar4 = *(uint *)(param_1 + 0x50);
    if (uVar6 <= uVar4) {
      uVar5 = *(uint *)(param_1 + 0x4c);
      if (uVar5 < *(uint *)(param_1 + 0x44)) {
        do {
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar4);
      }
      else {
        lVar9 = *(long *)(lVar3 + 0x10);
        iVar1 = *(int *)(lVar3 + 8);
        iVar2 = *(int *)(lVar3 + 0xc);
        do {
          uVar8 = *(uint *)(param_1 + 0x44);
          if (uVar8 <= uVar5) {
            do {
              if (*(char *)(param_1 + (ulong)uVar6 + (ulong)uVar8 + (ulong)uVar8 * 4 + 0x54) != '\0'
                 ) {
                local_48 = uVar8;
                uStack_44 = uVar6;
                FUN__text__00191328(local_74,param_1 + 0x20,&local_48);
                lVar3 = FUN__text__00195358(uVar7,local_74);
                if (((lVar3 != 0) && ((int)*(undefined8 *)(lVar3 + 8) == iVar1)) &&
                   (((int)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20) == iVar2 &&
                    (*(long *)(lVar3 + 0x10) == lVar9)))) {
                  return 1;
                }
                uVar5 = *(uint *)(param_1 + 0x4c);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 <= uVar5);
            uVar4 = *(uint *)(param_1 + 0x50);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar4);
      }
    }
  }
  return 0;
}


