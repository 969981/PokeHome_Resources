/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0034fd70; name: FUN_.text__0034fd70
 */


void FUN__text__0034fd70(undefined8 param_1,long *param_2,uint param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long local_70;
  long local_68;
  
  lVar3 = FUN__text__00321ac0();
  uVar9 = 0;
  iVar7 = 0;
  pbVar1 = &DAT__text__00193772 + lVar3;
  do {
    iVar8 = 0;
    do {
      FUN__text__003204d0(&local_68);
      lVar3 = local_68;
      local_70 = *param_4;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      FUN__text__00300380(lVar3,&local_70,iVar7,iVar8);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      uVar4 = FUN__text__00306588(*param_4);
      if ((((uVar4 & 1) == 0) &&
          (lVar3 = FUN__text__00637404(*(undefined8 *)(*param_4 + 0x58)), lVar3 != 0)) &&
         (plVar6 = param_2, uVar4 = (ulong)param_3, param_3 != 0)) {
        do {
          if (*plVar6 == lVar3) {
            *plVar6 = 0;
            bVar2 = *pbVar1;
            *pbVar1 = bVar2 + 1;
            lVar3 = *param_4;
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
            }
            if (bVar2 < 0x1e) {
              lVar5 = FUN__text__00321ac0();
              FUN__text__00306a28(lVar3,&DAT__text__00193774 + lVar5 + (ulong)bVar2 * 0x1c);
            }
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
            }
            uVar9 = uVar9 + 1;
            if (param_3 <= uVar9) {
              return;
            }
            if (0x1d < *pbVar1) {
              return;
            }
            break;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x1e);
    iVar7 = iVar7 + 1;
    if (iVar7 == 300) {
      return;
    }
  } while( true );
}


