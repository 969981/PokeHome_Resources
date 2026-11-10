/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a4d00; name: FUN_.text__004a4d00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004a4d00(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int local_74;
  byte local_70;
  int local_6f;
  char local_68;
  uint local_64;
  
  param_1 = param_1 + 8;
  local_64 = 0;
  uVar3 = FUN__text__004aecec(param_1,&local_64,4);
  uVar7 = (ulong)uVar3;
  if ((uVar3 == 1) && (local_64 != 0)) {
    uVar3 = *(int *)(param_2 + 0x5c) + local_64;
    if (*(long *)(param_2 + 0x50) == 0) {
      uVar4 = *(uint *)(param_2 + 0x58);
      lVar5 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_2 + 0x50);
        if ((lVar6 != 0) && (lVar6 != lVar5)) {
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar6 = uVar7 * 8;
                uVar7 = uVar7 + 2;
                *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar6);
                ((undefined8 *)(lVar5 + lVar6))[1] =
                     *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar6 + 8);
              } while (((ulong)uVar4 & 0xfffffffe) != uVar7);
            }
            if ((uVar4 & 1) != 0) {
              *(undefined8 *)(lVar5 + uVar7 * 8) =
                   *(undefined8 *)(*(long *)(param_2 + 0x50) + uVar7 * 8);
            }
            lVar6 = *(long *)(param_2 + 0x50);
          }
          FUN__text__00400fc0(0,lVar6);
        }
        goto LAB__text__004a4e20;
      }
    }
    else {
      lVar5 = FUN__text__00400fa0(0);
      if (lVar5 != 0) {
LAB__text__004a4e20:
        uVar7 = 1;
        *(long *)(param_2 + 0x50) = lVar5;
        *(uint *)(param_2 + 0x5c) = uVar3;
        goto LAB__text__004a4e2c;
      }
    }
    uVar7 = 0x34;
  }
  else {
LAB__text__004a4e2c:
    puVar1 = _DAT_008a4690;
    local_68 = '\0';
    if (((int)uVar7 == 1) && (local_64 != 0)) {
      uVar3 = 1;
      do {
        while( true ) {
          uVar4 = FUN__text__004aecec(param_1,&local_70,5);
          if (uVar4 != 1) {
            uVar7 = (ulong)uVar4;
            goto LAB__text__004a50f8;
          }
          if (local_70 - 1 < 0x16) {
                    /* WARNING: Could not emulate address calculation at 0x004a4e8c */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&UNK__text__004a4e98 +
                              (ulong)*(byte *)((ulong)(local_70 - 1) + 0x73d95a) * 4))();
            return uVar7;
          }
          if ((code *)*puVar1 != (code *)0x0) break;
          uVar4 = 1;
LAB__text__004a50b4:
          local_74 = 0;
          FUN__text__004ae7a0(param_1,local_6f,&local_74);
          if (local_74 != local_6f) {
            uVar4 = 7;
          }
          uVar7 = (ulong)uVar4;
          bVar2 = local_64 <= uVar3;
          uVar3 = uVar3 + 1;
          if (uVar4 != 1 || bVar2) goto LAB__text__004a50f8;
        }
        uVar4 = (*(code *)*puVar1)(&local_70,param_2,param_3);
        uVar7 = (ulong)uVar4;
        if (uVar4 == 3) {
          uVar4 = 3;
          goto LAB__text__004a50b4;
        }
        bVar2 = uVar3 < local_64;
        uVar3 = uVar3 + 1;
      } while (uVar4 == 1 && bVar2);
LAB__text__004a50f8:
      if (local_68 != '\0') {
        FUN__text__004b8120(*_DAT_008a45c0,_DAT_008a45b0 + 0x24);
      }
    }
  }
  return uVar7;
}


