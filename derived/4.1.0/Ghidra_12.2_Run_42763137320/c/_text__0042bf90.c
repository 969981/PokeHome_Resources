/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042bf90; name: FUN_.text__0042bf90
 */


void FUN__text__0042bf90(float param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  char local_38 [4];
  float local_34;
  
  local_38[0] = '\0';
  local_34 = param_1;
  plVar5 = (long *)(**(code **)(*(long *)(*(long *)(param_2 + 0x58) + 0x18) + 0x38))();
  if ((plVar5 != (long *)0x0) && (*(uint *)(plVar5 + 1) != 0)) {
    lVar8 = (ulong)*(uint *)(plVar5 + 1) << 2;
    pcVar7 = (char *)(*plVar5 + 2);
    do {
      if ((uint)*(ushort *)(pcVar7 + -2) == (param_3 & 0xffff)) {
        cVar4 = *pcVar7;
        if (cVar4 == '\x03') {
          uVar6 = FUN__text__0042c290();
          if ((uVar6 & 1) != 0) {
            local_38[0] = cVar4;
          }
        }
        else {
          uVar6 = FUN__text__0042c3f0(*(long *)(param_2 + 0x58) + 0x18,param_2,param_3,&local_34);
          if ((uVar6 & 1) != 0) {
            local_38[0] = cVar4;
            FUN__text__0042c110(param_2,param_3,&local_34,local_38);
            if (cVar4 != '\x04') goto LAB__text__0042c07c;
            local_34 = local_34 - param_1;
            goto LAB__text__0042c0d0;
          }
        }
        break;
      }
      pcVar7 = pcVar7 + 4;
      lVar8 = lVar8 + -4;
    } while (lVar8 != 0);
  }
  FUN__text__0042c110(param_2,param_3,&local_34,local_38);
LAB__text__0042c07c:
  uVar9 = *(uint *)(param_2 + 0x68);
  uVar3 = *(uint *)(param_2 + 0x6c);
  if (uVar3 <= uVar9) {
    iVar2 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar2 = 1;
    }
    uVar6 = FUN__text__0042cd80(param_2 + 0x60,iVar2);
    if (((uVar6 & 1) == 0) || (*(uint *)(param_2 + 0x6c) <= uVar9)) goto LAB__text__0042c0d0;
    uVar9 = *(uint *)(param_2 + 0x68);
  }
  *(uint *)(param_2 + 0x68) = uVar9 + 1;
  if (*(long *)(param_2 + 0x60) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x60) + (ulong)uVar9 * 0x10);
    *puVar1 = 0;
    *(short *)(puVar1 + 1) = (short)param_3;
    *(float *)((long)puVar1 + 0xc) = param_1;
  }
LAB__text__0042c0d0:
  plVar5 = *(long **)(param_2 + 0x50);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_3,&local_34,4);
  }
  return;
}


