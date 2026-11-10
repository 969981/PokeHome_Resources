/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066227c; name: FUN_.text__0066227c
 */


size_t FUN__text__0066227c(long *param_1,undefined8 param_2,void *param_3,ulong param_4,int *param_5
                          )

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  int local_34;
  
  lVar8 = *param_1;
  plVar1 = param_1 + 0xaa;
  local_34 = 0;
  lVar7 = *(long *)(lVar8 + 0x1e8);
  iVar2 = FUN__text__00662c1c(plVar1);
  if (iVar2 != 0) {
LAB__text__006622c0:
    local_34 = 0x10;
    goto LAB__text__006622c4;
  }
  *(undefined8 *)(lVar7 + 0x278) = 0;
  *(undefined8 *)(lVar7 + 0x270) = 0;
  if (*(char *)(lVar7 + 0x21c) != '\0') {
    uVar5 = *(ulong *)(lVar7 + 0x228);
    uVar6 = (*(long **)(lVar7 + 0x220))[2];
    sVar9 = uVar6 - uVar5;
    if (uVar5 <= uVar6 && sVar9 != 0) {
      if (param_4 <= sVar9) {
        sVar9 = param_4;
      }
      memcpy(param_3,(void *)(**(long **)(lVar7 + 0x220) + uVar5),sVar9);
      *(size_t *)(lVar7 + 0x228) = *(long *)(lVar7 + 0x228) + sVar9;
      return sVar9;
    }
  }
  if ((*(long *)(lVar8 + 0x1520) == 0) || (*(size_t *)(lVar7 + 0x268) == 0)) {
    if (*(void **)(lVar7 + 0x240) != (void *)0x0) {
      sVar9 = *(ulong *)(lVar7 + 0x248);
      if (param_4 <= *(ulong *)(lVar7 + 0x248)) {
        sVar9 = param_4;
      }
      memcpy(param_3,*(void **)(lVar7 + 0x240),sVar9);
      *(size_t *)(lVar7 + 0x240) = *(long *)(lVar7 + 0x240) + sVar9;
      *(size_t *)(lVar7 + 0x248) = *(long *)(lVar7 + 0x248) - sVar9;
      FUN__text__00666f74(lVar8,0x712c2f,sVar9);
      if (*(long *)(lVar7 + 0x248) != 0) {
        return sVar9;
      }
      *(undefined4 *)(param_1 + 0xbb) = 0;
      *(undefined8 *)(lVar7 + 0x240) = 0;
      *(undefined8 *)(lVar7 + 0x248) = 0;
      iVar2 = FUN__text__00661d1c(param_1,plVar1,&local_34);
      if (iVar2 == 0) {
        return sVar9;
      }
      goto LAB__text__006622c4;
    }
    if ((int)param_1[0xbb] == 0) {
      *(void **)(lVar7 + 600) = param_3;
      *(ulong *)(lVar7 + 0x260) = param_4;
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if (param_1[0xb9] != 0) {
        uVar5 = param_1[0xb9] - param_1[0xba];
        lVar4 = param_1[0xb8] + param_1[0xba];
LAB__text__00662464:
        uVar6 = FUN__text__0067d808(*plVar1,lVar4,uVar5);
        iVar2 = FUN__text__00679eec();
        if (iVar2 != 0) {
          uVar3 = FUN__text__00679b60(uVar6 & 0xffffffff);
          FUN__text__0066713c(lVar8,0x71995d,uVar6,uVar3);
          local_34 = 0x38;
          goto LAB__text__006622c4;
        }
        if (uVar5 == uVar6) {
          param_1[0xb9] = 0;
          param_1[0xba] = 0;
        }
        else {
          param_1[0xba] = param_1[0xba] + uVar6;
        }
        iVar2 = FUN__text__00662b8c(lVar8,*plVar1);
        if (iVar2 != 0) {
          local_34 = 0x37;
          goto LAB__text__006622c4;
        }
        iVar2 = FUN__text__00662c1c(plVar1);
        if (iVar2 != 0) goto LAB__text__006622c0;
        goto LAB__text__00662384;
      }
      uVar5 = (*(code *)param_1[0xb7])(param_1,0,param_1[0xb8],0x8000,&local_34);
      if (uVar5 == 0) {
        *param_5 = 0;
        return 0;
      }
      if (uVar5 != 0xffffffffffffffff) {
        lVar4 = param_1[0xb8];
        param_1[0xb9] = uVar5;
        goto LAB__text__00662464;
      }
      if (local_34 != 0x51) {
        FUN__text__0066713c(lVar8,0x716e33);
        goto LAB__text__006622c4;
      }
      goto LAB__text__006624fc;
    }
  }
  else {
    if (*(void **)(lVar7 + 600) != param_3) {
      memmove(param_3,*(void **)(lVar7 + 600),*(size_t *)(lVar7 + 0x268));
      *(void **)(lVar7 + 600) = param_3;
      *(ulong *)(lVar7 + 0x260) = param_4 - *(long *)(lVar7 + 0x268);
    }
    if (((int)param_1[0xbb] == *(int *)(lVar7 + 0x218)) && (*(long *)(lVar7 + 0x240) == 0)) {
      *(undefined4 *)(param_1 + 0xbb) = 0;
      iVar2 = FUN__text__00661d1c(param_1,plVar1,&local_34);
      if (iVar2 != 0) goto LAB__text__006622c4;
    }
LAB__text__00662384:
    sVar9 = *(size_t *)(lVar7 + 0x268);
    if (sVar9 != 0) {
      *(undefined8 *)(lVar7 + 0x268) = 0;
      if ((int)param_1[0xbb] == *(int *)(lVar7 + 0x218)) {
        return sVar9;
      }
      if (*(char *)(lVar7 + 0x250) == '\0') {
        param_1[0xbc] = param_1[0xbc] - *(long *)(lVar8 + 0x1520);
        *(undefined8 *)(lVar8 + 0x1520) = 0;
        return sVar9;
      }
      return sVar9;
    }
LAB__text__006624fc:
    if (*(char *)(lVar7 + 0x250) != '\0') {
      sVar9 = FUN__text__00663ae0(param_1,lVar8,lVar7,param_5);
      return sVar9;
    }
  }
  local_34 = 0x51;
LAB__text__006622c4:
  *param_5 = local_34;
  return 0xffffffffffffffff;
}


