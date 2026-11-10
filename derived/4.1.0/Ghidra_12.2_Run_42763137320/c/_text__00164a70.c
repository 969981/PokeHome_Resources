/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164a70; name: FUN_.text__00164a70
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 * FUN__text__00164a70(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 local_44;
  
  uVar3 = FUN__text__005f37c0(param_3);
  if (uVar3 != 0) {
    if (3 < uVar3) {
      puVar6 = (undefined2 *)FUN__text__005f3780(param_3);
      return puVar6;
    }
    uVar8 = uVar3 - 1;
    uVar1 = uVar8 * 2;
    uVar4 = FUN__text__005f37f0(param_3,0);
    uVar2 = FUN__text__0015a010(param_3);
    uVar5 = FUN__text__00164f60(param_1,uVar2,uVar4);
    local_44 = 0;
    if (uVar1 <= uVar5) {
      uVar5 = 0;
    }
    if (uVar8 == 0) {
      param_3 = (undefined2 *)FUN__text__005f3780(param_3);
    }
    else {
      lVar9 = 0;
      iVar7 = 1;
      do {
        uVar4 = FUN__text__005f37f0(param_3,iVar7);
        *(undefined2 *)((long)&local_44 + lVar9) = uVar4;
        lVar9 = lVar9 + 2;
        iVar7 = iVar7 + 1;
      } while ((ulong)uVar8 * 2 != lVar9);
      param_3 = (undefined2 *)FUN__text__005f3780(param_3);
      if (uVar8 != 0) {
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        if (uVar5 == 0) {
          uVar8 = local_44 & 0xff;
          puVar6 = param_3;
          if ((byte)local_44 != 0) {
            do {
              param_3 = puVar6 + 1;
              FUN__text__005f335c(param_2,*puVar6);
              uVar8 = uVar8 - 1;
              puVar6 = param_3;
            } while (uVar8 != 0);
          }
        }
        else {
          param_3 = param_3 + (byte)local_44;
        }
        if (uVar5 == 1) {
          uVar8 = (uint)local_44._1_1_;
          puVar6 = param_3;
          if (local_44._1_1_ != 0) {
            do {
              param_3 = puVar6 + 1;
              FUN__text__005f335c(param_2,*puVar6);
              uVar8 = uVar8 - 1;
              puVar6 = param_3;
            } while (uVar8 != 0);
          }
        }
        else {
          param_3 = param_3 + local_44._1_1_;
        }
        if (uVar1 != 2) {
          if (uVar5 == 2) {
            uVar8 = (uint)local_44._2_1_;
            puVar6 = param_3;
            if (local_44._2_1_ != 0) {
              do {
                param_3 = puVar6 + 1;
                FUN__text__005f335c(param_2,*puVar6);
                uVar8 = uVar8 - 1;
                puVar6 = param_3;
              } while (uVar8 != 0);
            }
          }
          else {
            param_3 = param_3 + local_44._2_1_;
          }
          if (uVar1 != 3) {
            if (uVar5 == 3) {
              uVar5 = (uint)local_44._3_1_;
              puVar6 = param_3;
              if (local_44._3_1_ != 0) {
                do {
                  param_3 = puVar6 + 1;
                  FUN__text__005f335c(param_2,*puVar6);
                  uVar5 = uVar5 - 1;
                  puVar6 = param_3;
                } while (uVar5 != 0);
              }
            }
            else {
              param_3 = param_3 + local_44._3_1_;
            }
          }
        }
      }
    }
  }
  return param_3;
}


