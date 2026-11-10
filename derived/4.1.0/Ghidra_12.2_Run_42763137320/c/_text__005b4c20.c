/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4c20; name: FUN_.text__005b4c20
 */


void FUN__text__005b4c20(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (param_3 == param_1) {
LAB__text__005b4ef0:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    do {
      plVar2 = param_3;
      if ((param_2 != (long *)0x0) && ((int)param_2[3] != 1)) {
        *(undefined4 *)(param_2 + 3) = 1;
        return;
      }
      plVar3 = (long *)plVar2[1];
      if (param_2 != plVar3) {
        if ((int)plVar3[3] == 0) {
          *(undefined4 *)(plVar3 + 3) = 1;
          plVar5 = (long *)*plVar2;
          *(undefined4 *)(plVar2 + 3) = 0;
          puVar8 = (undefined8 *)plVar3[2];
          plVar4 = (long *)plVar5[1];
          plVar2[1] = (long)puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar2;
          }
          plVar3[2] = (long)plVar2;
          lVar7 = 8;
          if (plVar4 != plVar2) {
            lVar7 = 0x10;
          }
          *plVar2 = (long)plVar3;
          lVar1 = 0;
          if (plVar5 != param_1) {
            lVar1 = lVar7;
          }
          *plVar3 = (long)plVar5;
          *(long **)((long)plVar5 + lVar1) = plVar3;
          plVar3 = (long *)plVar2[1];
          lVar7 = plVar3[1];
          puVar8 = (undefined8 *)plVar3[2];
          if (puVar8 == (undefined8 *)0x0) goto LAB__text__005b4d08;
LAB__text__005b4cfc:
          if (*(int *)(puVar8 + 3) == 1) goto LAB__text__005b4d08;
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) {
            *(undefined4 *)(puVar8 + 3) = 1;
            *(undefined4 *)(plVar3 + 3) = 0;
            plVar5 = (long *)*plVar3;
            puVar6 = (undefined8 *)puVar8[1];
            plVar4 = (long *)plVar5[1];
            plVar3[2] = (long)puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = plVar3;
            }
            puVar8[1] = plVar3;
            *plVar3 = (long)puVar8;
            lVar7 = 8;
            if (plVar4 != plVar3) {
              lVar7 = 0x10;
            }
            lVar1 = 0;
            if (plVar5 != param_1) {
              lVar1 = lVar7;
            }
            *puVar8 = plVar5;
            *(undefined8 **)((long)plVar5 + lVar1) = puVar8;
            plVar3 = (long *)plVar2[1];
          }
        }
        else {
          lVar7 = plVar3[1];
          puVar8 = (undefined8 *)plVar3[2];
          if (puVar8 != (undefined8 *)0x0) goto LAB__text__005b4cfc;
LAB__text__005b4d08:
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) goto LAB__text__005b4c40;
        }
        *(int *)(plVar3 + 3) = (int)plVar2[3];
        *(undefined4 *)(plVar2 + 3) = 1;
        if (plVar3[1] != 0) {
          *(undefined4 *)(plVar3[1] + 0x18) = 1;
        }
        plVar3 = (long *)*plVar2;
        puVar8 = (undefined8 *)plVar2[1];
        plVar5 = (long *)plVar3[1];
        puVar6 = (undefined8 *)puVar8[2];
        plVar2[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar2;
        }
        puVar8[2] = plVar2;
LAB__text__005b4ecc:
        *plVar2 = (long)puVar8;
        lVar7 = 8;
        if (plVar5 != plVar2) {
          lVar7 = 0x10;
        }
        *puVar8 = plVar3;
        lVar1 = 0;
        if (plVar3 != param_1) {
          lVar1 = lVar7;
        }
        *(undefined8 **)((long)plVar3 + lVar1) = puVar8;
        goto LAB__text__005b4ef0;
      }
      plVar3 = (long *)plVar2[2];
      if ((int)plVar3[3] == 0) {
        *(undefined4 *)(plVar3 + 3) = 1;
        plVar5 = (long *)*plVar2;
        *(undefined4 *)(plVar2 + 3) = 0;
        puVar8 = (undefined8 *)plVar3[1];
        plVar4 = (long *)plVar5[1];
        plVar2[2] = (long)puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = plVar2;
        }
        plVar3[1] = (long)plVar2;
        lVar7 = 8;
        if (plVar4 != plVar2) {
          lVar7 = 0x10;
        }
        *plVar2 = (long)plVar3;
        lVar1 = 0;
        if (plVar5 != param_1) {
          lVar1 = lVar7;
        }
        *plVar3 = (long)plVar5;
        *(long **)((long)plVar5 + lVar1) = plVar3;
        plVar3 = (long *)plVar2[2];
        puVar8 = (undefined8 *)plVar3[1];
        lVar7 = plVar3[2];
        if (puVar8 == (undefined8 *)0x0) goto LAB__text__005b4d74;
LAB__text__005b4d68:
        if (*(int *)(puVar8 + 3) == 1) goto LAB__text__005b4d74;
        if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) {
          *(undefined4 *)(puVar8 + 3) = 1;
          *(undefined4 *)(plVar3 + 3) = 0;
          plVar5 = (long *)*plVar3;
          puVar6 = (undefined8 *)puVar8[2];
          plVar4 = (long *)plVar5[1];
          plVar3[1] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = plVar3;
          }
          puVar8[2] = plVar3;
          *plVar3 = (long)puVar8;
          lVar7 = 8;
          if (plVar4 != plVar3) {
            lVar7 = 0x10;
          }
          lVar1 = 0;
          if (plVar5 != param_1) {
            lVar1 = lVar7;
          }
          *puVar8 = plVar5;
          *(undefined8 **)((long)plVar5 + lVar1) = puVar8;
          plVar3 = (long *)plVar2[2];
        }
LAB__text__005b4e90:
        *(int *)(plVar3 + 3) = (int)plVar2[3];
        *(undefined4 *)(plVar2 + 3) = 1;
        if (plVar3[2] != 0) {
          *(undefined4 *)(plVar3[2] + 0x18) = 1;
        }
        puVar8 = (undefined8 *)plVar2[2];
        plVar3 = (long *)*plVar2;
        plVar5 = (long *)plVar3[1];
        puVar6 = (undefined8 *)puVar8[1];
        plVar2[2] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar2;
        }
        puVar8[1] = plVar2;
        goto LAB__text__005b4ecc;
      }
      puVar8 = (undefined8 *)plVar3[1];
      lVar7 = plVar3[2];
      if (puVar8 != (undefined8 *)0x0) goto LAB__text__005b4d68;
LAB__text__005b4d74:
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 1)) goto LAB__text__005b4e90;
LAB__text__005b4c40:
      *(undefined4 *)(plVar3 + 3) = 0;
      param_2 = plVar2;
      param_3 = (long *)*plVar2;
    } while ((long *)*plVar2 != param_1);
  }
  *(undefined4 *)(plVar2 + 3) = 1;
  return;
}


