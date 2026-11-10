/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a53d8; name: FUN_.text__004a53d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004a53d8(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_90 [12];
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  uint local_50;
  int iStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_28;
  undefined1 uStack_21;
  
  puVar4 = auStack_90;
  if (param_2 == 0) {
    return 1;
  }
  FUN__text__00411c2c(&uStack_21);
  param_1 = param_1 + 8;
  iVar2 = FUN__text__004aecec(param_1,&local_84,2);
  FUN__text__0040b450((undefined2)local_84);
  if ((((iVar2 == 1) && (iVar2 = FUN__text__004aecec(param_1,&local_84,4), iVar2 == 1)) &&
      (iVar2 = FUN__text__0040ed80(local_84,2), iVar2 == 1)) &&
     (iVar2 = FUN__text__004aecec(param_1,&local_84,2), iVar2 == 1)) {
    iVar2 = FUN__text__0040eea0((undefined2)local_84,2);
    if ((iVar2 == 1) && (iVar2 = FUN__text__004aecec(param_1,&local_84,2), iVar2 == 1)) {
      iVar2 = FUN__text__0040ef50((undefined2)local_84,2);
      local_28 = 0;
      if (iVar2 == 1) {
        iVar2 = FUN__text__004aecec(param_1,&local_28,4);
        puVar1 = _DAT_008a4658;
        if (iVar2 == 1) {
          if (local_28 != 0) {
            uVar3 = 0;
            do {
              local_84 = 0;
              local_48 = 0;
              uStack_44 = 0;
              iVar2 = FUN__text__004aecec(param_1,&local_84,4);
              if (((iVar2 != 1) || (iVar2 = FUN__text__004aecec(param_1,&uStack_44,4), iVar2 != 1))
                 || ((iVar2 = FUN__text__00430af0(*puVar1,local_84), iVar2 != 1 ||
                     ((iVar2 = FUN__text__00430e50(*puVar1,local_84,uStack_44), iVar2 != 1 ||
                      (iVar2 = FUN__text__004aecec(param_1,&local_48,4), iVar2 != 1)))))) {
LAB__text__004a5758:
                uStack_44 = 0;
                goto LAB__text__004a5760;
              }
              if (local_48 != 0) {
                uVar5 = 0;
                do {
                  local_50 = 0;
                  iStack_4c = 0;
                  local_58 = local_58 & 0xffffffff;
                  iVar2 = FUN__text__004aecec(param_1,&iStack_4c,4);
                  if (((iVar2 != 1) ||
                      (iVar2 = FUN__text__004aecec(param_1,&local_50,4), iVar2 != 1)) ||
                     (iVar2 = FUN__text__004aecec(param_1,(long)&local_58 + 4,4), iVar2 != 1))
                  goto LAB__text__004a5758;
                  iVar2 = FUN__text__00430f70(*puVar1,local_84,iStack_4c,local_50,local_58._4_4_,0);
                  if (iVar2 != 1) goto LAB__text__004a5758;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < local_48);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < local_28);
          }
          uStack_44 = 0;
          iVar2 = FUN__text__004aecec(param_1,&uStack_44,4);
          puVar1 = _DAT_008a45f0;
          if (iVar2 == 1) {
            if (uStack_44 != 0) {
              uVar3 = 0;
              do {
                local_84 = 0;
                iStack_4c = 0;
                local_48 = 0;
                local_50 = local_50 & 0xffffff00;
                iVar2 = FUN__text__004aecec(param_1,&local_84,4);
                if (((iVar2 != 1) || (iVar2 = FUN__text__004aecec(param_1,&local_48,4), iVar2 != 1))
                   || (iVar2 = FUN__text__004aecec(param_1,&local_50,1), iVar2 != 1))
                goto LAB__text__004a5760;
                iVar2 = FUN__text__004aecec(param_1,&iStack_4c,4);
                if ((iVar2 == 1) && (iStack_4c != 0)) {
                  puVar4 = puVar4 + -((ulong)(uint)(iStack_4c * 0xc) + 0xf & 0x1fffffff0);
                  iVar2 = FUN__text__004aecec(param_1,puVar4);
                  if (iVar2 != 1) goto LAB__text__004a5760;
                  iVar2 = FUN__text__004356c0(*puVar1,(ulong)CONCAT14((undefined1)local_50,local_48)
                                              ,(ulong)local_84 | 0x200000000,puVar4,iStack_4c);
                }
                if (iVar2 != 1) goto LAB__text__004a5760;
                uVar3 = uVar3 + 1;
              } while (uVar3 < uStack_44);
            }
            local_48 = 0;
            iVar2 = FUN__text__004aecec(param_1,&local_48,4);
            if ((iVar2 == 1) && (local_48 != 0)) {
LAB__text__004a5784:
              do {
                local_5c = 0;
                local_58 = 0;
                local_50 = 0;
                iStack_4c = 0;
                iVar2 = FUN__text__004aecec(param_1,&local_50,4);
                if ((iVar2 != 1) || (iVar2 = FUN__text__004aecec(param_1,&iStack_4c,4), iVar2 != 1))
                {
LAB__text__004a59c8:
                  iStack_4c = 0;
                  goto LAB__text__004a59a4;
                }
                FUN__text__00434e50(iStack_4c,DAT_00ae9a70,local_50);
                iVar2 = FUN__text__004aecec(param_1,(long)&local_58 + 4,4);
                if (((iVar2 != 1) || (iVar2 = FUN__text__004aecec(param_1,&local_58,4), iVar2 != 1))
                   || (iVar2 = FUN__text__004aecec(param_1,&local_5c,4), iVar2 != 1))
                goto LAB__text__004a59c8;
                local_84 = local_58._4_4_;
                local_80 = (undefined4)local_58;
                uStack_7c = local_5c;
                FUN__text__00434f30(DAT_00ae9a70,local_50,&local_84);
                iVar2 = FUN__text__004aecec(param_1,&local_84,1);
                if ((iVar2 != 1) || ((char)local_84 == '\0')) {
                  if (iVar2 != 1) goto LAB__text__004a5764;
                  local_48 = local_48 - 1;
                  if (local_48 == 0) break;
                  goto LAB__text__004a5784;
                }
                FUN__text__004350d0(DAT_00ae9a70,local_50);
                local_48 = local_48 - 1;
              } while (local_48 != 0);
            }
            else {
              iStack_4c = 0;
              if (iVar2 != 1) goto LAB__text__004a59a4;
            }
            iStack_4c = 0;
            iVar2 = FUN__text__004aecec(param_1,&iStack_4c,4);
            if (iVar2 == 1) {
              while (((iStack_4c != 0 &&
                      (iVar2 = FUN__text__004aecec(param_1,&local_50,4), iVar2 == 1)) &&
                     ((iVar2 = FUN__text__004aecec(param_1,(long)&local_58 + 4,4), iVar2 == 1 &&
                      ((((iVar2 = FUN__text__004aecec(param_1,&local_58,4), iVar2 == 1 &&
                         (iVar2 = FUN__text__004aecec(param_1,&local_5c,4), iVar2 == 1)) &&
                        (iVar2 = FUN__text__004aecec(param_1,&local_60,4), iVar2 == 1)) &&
                       ((iVar2 = FUN__text__004aecec(param_1,&uStack_64,4), iVar2 == 1 &&
                        (iVar2 = FUN__text__004aecec(param_1,&local_68,4), iVar2 == 1))))))))) {
                local_80 = local_58._4_4_;
                uStack_7c = (undefined4)local_58;
                local_84 = local_50;
                local_78 = local_5c;
                uStack_74 = local_60;
                local_70 = uStack_64;
                uStack_6c = local_68;
                iVar2 = FUN__text__004c70a0(local_50,&local_84);
                if (iVar2 != 1) break;
                iStack_4c = iStack_4c + -1;
              }
            }
          }
          else {
LAB__text__004a5760:
            local_48 = 0;
LAB__text__004a5764:
            iStack_4c = 0;
          }
        }
      }
    }
  }
LAB__text__004a59a4:
  FUN__text__00411c70(&uStack_21);
  return iVar2;
}


