/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003016a0; name: FUN_.text__003016a0
 */


/* WARNING: Removing unreachable block (ram,0x003018a4) */
/* WARNING: Removing unreachable block (ram,0x00301888) */

bool FUN__text__003016a0(long param_1,long *param_2,long *param_3,uint *param_4,uint *param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long local_70;
  long local_68;
  
  uVar2 = *(uint *)(param_1 + 0x700fdc);
  if ((int)uVar2 < 1) {
    bVar6 = false;
  }
  else {
    uVar5 = *param_4;
    uVar7 = 0;
    bVar6 = true;
    do {
      if (uVar2 <= uVar5) {
        uVar5 = 0;
      }
      lVar9 = *param_2;
      if (lVar9 == 0) {
        lVar11 = *param_3;
        if (lVar11 != 0) goto LAB__text__003017cc;
        local_70 = 0;
        local_68 = 0;
        uVar4 = FUN__text__00301b08(param_1,&local_68,&local_70,uVar5,0);
        if ((uVar4 & 1) == 0) {
          uVar12 = 1;
          do {
            uVar10 = uVar12;
            if (uVar10 == 0x1e) {
              bVar3 = false;
              goto LAB__text__00301900;
            }
            local_70 = 0;
            local_68 = 0;
            uVar4 = FUN__text__00301b08(param_1,&local_68,&local_70,uVar5,uVar10);
            uVar12 = uVar10 + 1;
          } while ((uVar4 & 1) == 0);
          bVar3 = uVar10 - 1 < 0x1d;
          *param_5 = uVar10;
        }
        else {
          bVar3 = true;
          *param_5 = 0;
        }
      }
      else {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        lVar11 = *param_3;
        if (lVar11 == 0) {
          uVar12 = 0;
          bVar3 = true;
          do {
            local_68 = lVar9;
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(lVar9 + 0x48);
            local_70 = 0;
            uVar4 = FUN__text__00301b08(param_1,&local_68,&local_70,uVar5,uVar12);
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))(lVar9 + 0x48);
            local_68 = 0;
            if ((uVar4 & 1) != 0) {
              *param_5 = uVar12;
              break;
            }
            bVar3 = uVar12 < 0x1d;
            uVar12 = uVar12 + 1;
          } while (uVar12 != 0x1e);
        }
        else {
LAB__text__003017cc:
          plVar8 = (long *)(lVar11 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          uVar12 = 0;
          plVar1 = (long *)(lVar9 + 0x48);
          bVar3 = true;
          do {
            local_68 = lVar9;
            if (lVar9 != 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
            local_70 = lVar11;
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar8);
            uVar4 = FUN__text__00301b08(param_1,&local_68,&local_70,uVar5,uVar12);
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar8);
            local_70 = 0;
            if (lVar9 != 0) {
              (**(code **)(*plVar1 + 0x18))(plVar1);
              local_68 = 0;
            }
            if ((uVar4 & 1) != 0) {
              *param_5 = uVar12;
              break;
            }
            bVar3 = uVar12 < 0x1d;
            uVar12 = uVar12 + 1;
          } while (uVar12 != 0x1e);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
LAB__text__00301900:
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (bVar3) {
        *param_4 = uVar5;
        return bVar6;
      }
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 1;
      bVar6 = (int)uVar7 < (int)uVar2;
    } while (uVar7 != uVar2);
  }
  return bVar6;
}


