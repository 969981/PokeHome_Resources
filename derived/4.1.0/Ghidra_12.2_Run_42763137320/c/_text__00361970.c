/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00361970; name: FUN_.text__00361970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00361970(undefined8 param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_38 = 0;
  uVar4 = FUN__text__00371260(*_DAT_0089f448,&local_38);
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar5 = FUN__text__005dc81c(), puVar3 = _DAT_0089f5c8, lVar5 == 0)) {
    return;
  }
  lVar11 = 0;
LAB__text__003619ec:
  FUN__text__002a7cd4(&local_38,param_2,lVar11);
  puVar1 = puVar3;
  if (CONCAT44(uStack_34,local_38) != 0) {
    puVar1 = (ulong *)(CONCAT44(uStack_34,local_38) + 0x58);
  }
  uVar7 = param_3[1];
  uVar6 = *puVar1;
  local_54 = (undefined4)uVar6;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*param_3 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (1 < uVar8) {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB__text__00361b10;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar2 * uVar7;
            }
            if (uVar8 != uVar9) goto LAB__text__00361b5c;
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB__text__00361b5c;
        } while( true );
      }
      do {
        if (plVar10[1] == uVar6) {
          if (plVar10[2] == uVar6) goto LAB__text__00361b10;
        }
        else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) break;
      } while( true );
    }
  }
LAB__text__00361b5c:
                    /* WARNING: Subroutine does not return */
  FUN__text__0011a180(0x711beb);
LAB__text__00361b10:
  local_58[0] = (undefined1)plVar10[3];
  FUN__text__00364260(uVar4,&local_54,local_58);
  if (CONCAT44(uStack_34,local_38) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_34,local_38) + 0x48) + 0x18))();
  }
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar5) {
    return;
  }
  goto LAB__text__003619ec;
}


