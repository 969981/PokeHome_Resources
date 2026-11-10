/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d6c0; name: FUN_.text__0064d6c0
 */


void FUN__text__0064d6c0(void)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar7 = DAT_00c5f5c0;
  do {
    while( true ) {
      if (puVar7 == (undefined8 *)0x0) {
        DAT_00c5f5c0 = puVar7;
        return;
      }
      plVar6 = (long *)*puVar7;
      plVar1 = (long *)puVar7[1];
      if (plVar6 == plVar1) {
        DAT_00c5f5c0 = puVar7;
        return;
      }
      DAT_00c5f5c0 = puVar7;
      if ((*plVar6 == 0) || (puVar5 = *(undefined8 **)(*plVar6 + 0x60), puVar5 == (undefined8 *)0x0)
         ) break;
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      plVar2 = (long *)FUN__text__0021a930();
      if (plVar2 != plVar1) {
        do {
          plVar1 = (long *)*plVar1;
        } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
        if (plVar1 == (long *)0x0) {
          plVar1 = (long *)DAT_00c5f5c0[1];
          puVar7 = DAT_00c5f5c0;
          if (plVar6 + 1 != plVar1) goto LAB__text__0064d8b0;
          goto LAB__text__0064d808;
        }
      }
      uVar3 = *(uint *)(puVar5 + 0x18);
      if (uVar3 == 1) {
        if (puVar5[0x15] != 0) {
          if (*(long **)puVar5[0x14] == (long *)0x0) {
            return;
          }
          (**(code **)(**(long **)puVar5[0x14] + 0x38))();
          *(undefined4 *)(puVar5 + 0x18) = 2;
          return;
        }
        *(undefined4 *)(puVar5 + 0x18) = 2;
        (**(code **)(puVar5[-10] + 0x38))(puVar5 + -10);
        uVar3 = *(uint *)(puVar5 + 0x18);
      }
      puVar7 = DAT_00c5f5c0;
      if (6 < uVar3) {
        return;
      }
      if ((1 << (ulong)(uVar3 & 0x1f) & 0x58U) == 0) {
        return;
      }
      plVar1 = plVar6 + 1;
      plVar8 = (long *)DAT_00c5f5c0[1];
      plVar2 = plVar6;
      if (plVar1 == plVar8) {
        if (plVar1 != plVar6) {
LAB__text__0064d824:
          do {
            plVar2 = plVar1 + -1;
            if (*plVar2 != 0) {
              (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
              plVar1[-1] = 0;
            }
            plVar1 = plVar2;
          } while (plVar2 != plVar6);
        }
      }
      else {
        do {
          if (*plVar2 != 0) {
            (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          }
          plVar6 = plVar2 + 1;
          lVar4 = *plVar6;
          *plVar6 = 0;
          *plVar2 = lVar4;
          plVar1 = plVar2 + 2;
          plVar2 = plVar6;
        } while (plVar1 != plVar8);
        plVar1 = (long *)puVar7[1];
        if (plVar1 != plVar6) goto LAB__text__0064d824;
      }
      puVar7[1] = plVar6;
      puVar7 = DAT_00c5f5c0;
    }
    if (plVar6 + 1 == plVar1) {
LAB__text__0064d808:
      plVar8 = plVar6;
      puVar7 = DAT_00c5f5c0;
      if (plVar1 != plVar6) {
LAB__text__0064d8e0:
        do {
          plVar2 = plVar1 + -1;
          if (*plVar2 != 0) {
            (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
            plVar1[-1] = 0;
          }
          plVar6 = plVar8;
          plVar1 = plVar2;
        } while (plVar2 != plVar8);
      }
    }
    else {
LAB__text__0064d8b0:
      do {
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        }
        plVar8 = plVar6 + 1;
        lVar4 = *plVar8;
        *plVar8 = 0;
        *plVar6 = lVar4;
        plVar2 = plVar6 + 2;
        plVar6 = plVar8;
      } while (plVar2 != plVar1);
      plVar1 = (long *)puVar7[1];
      if (plVar1 != plVar8) goto LAB__text__0064d8e0;
    }
    puVar7[1] = plVar6;
    puVar7 = DAT_00c5f5c0;
  } while( true );
}


