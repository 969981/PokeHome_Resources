/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045acd0; name: FUN_.text__0045acd0
 */


void FUN__text__0045acd0(float param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_74;
  long *local_70;
  long *local_68;
  
  param_1 = *(float *)(param_2 + 0x10) * param_1;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(float *)(param_3 + 0x174) == *(float *)(param_3 + 0x160)) {
    local_84 = *(float *)(param_3 + 0x164);
    if ((((*(float *)(param_3 + 0x178) == local_84) &&
         (*(float *)(param_3 + 0x17c) == *(float *)(param_3 + 0x168))) &&
        (*(float *)(param_3 + 0x180) == *(float *)(param_3 + 0x16c))) &&
       (bVar1 = *(byte *)(param_3 + 0x170) ^ *(byte *)(param_3 + 0x184), (bVar1 & 7) == 0)) {
      local_74 = bVar1 >> 3 & 1;
    }
    else {
      local_74 = 1;
    }
  }
  else {
    local_84 = *(float *)(param_3 + 0x164);
    local_74 = 1;
  }
  local_78 = 0;
  fStack_88 = *(float *)(param_3 + 0x160) * 0.01;
  local_8c = *(float *)(param_3 + 0x16c) * 0.01;
  local_84 = local_84 * 0.01;
  local_77 = *(byte *)(param_3 + 0x170) & 7;
  local_76 = 1;
  fStack_80 = *(float *)(param_3 + 0x168) * 0.01;
  local_7c = *(float *)(param_3 + 0x188) * 0.01;
  local_90 = param_1;
  if ((*(byte *)(param_3 + 0x170) >> 3 & 1) == 0) goto LAB__text__0045ae58;
  local_78 = *(byte *)(param_3 + 0x19c) >> 3 & 7;
  lVar3 = FUN__text__0045b010(param_3);
  if (lVar3 == 0) goto LAB__text__0045ae58;
  local_76 = *(byte *)(lVar3 + 0x20b) >> 1 & 1;
  if ((ulong)*(byte *)(lVar3 + 0x1fd) == 0xff) {
    local_70 = (long *)0x0;
    uVar5 = (ulong)*(byte *)(lVar3 + 0x1fe);
    if (uVar5 == 0xff) goto LAB__text__0045ae50;
  }
  else {
    plVar4 = (long *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x1fd) * 0x18 + 0x30);
    local_70 = (long *)0x0;
    if (*plVar4 != 0) {
      local_70 = plVar4;
    }
    uVar5 = (ulong)*(byte *)(lVar3 + 0x1fe);
    if (uVar5 == 0xff) {
LAB__text__0045ae50:
      local_68 = (long *)0x0;
      goto LAB__text__0045ae58;
    }
  }
  plVar4 = (long *)(lVar3 + uVar5 * 0x18 + 0x30);
  local_68 = (long *)0x0;
  if (*plVar4 != 0) {
    local_68 = plVar4;
  }
LAB__text__0045ae58:
  lVar3 = *(long *)(param_2 + 0x30);
  do {
    if (lVar3 == 0) {
      *(undefined8 *)(param_3 + 0x174) = *(undefined8 *)(param_3 + 0x160);
      *(undefined8 *)(param_3 + 0x17c) = *(undefined8 *)(param_3 + 0x168);
      *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_3 + 0x170);
      return;
    }
    if ((*(byte *)(lVar3 + 0x198) & 1) == 0) {
      *(float *)(lVar3 + 0xc) = *(float *)(lVar3 + 0x188) * param_1;
LAB__text__0045ae98:
      if (((*(byte *)(param_3 + 0x170) >> 3 & 1) == 0) || (*(int *)(lVar3 + 0x194) == 3)) {
        uVar5 = FUN__text__0045c058(lVar3);
        if ((uVar5 & 0xf00) == 0) {
          FUN__text__0045a8c0(lVar3,param_5);
          bVar1 = *(byte *)(lVar3 + 0x198);
        }
        else {
          FUN__text__0045a6b0(lVar3,&local_90,param_5);
          bVar1 = *(byte *)(lVar3 + 0x198);
        }
      }
      else {
        uVar2 = FUN__text__0045c058(lVar3);
        if ((uVar2 & 0xf00) == 0x300) {
          FUN__text__0045a2a0();
          bVar1 = *(byte *)(lVar3 + 0x198);
        }
        else {
          FUN__text__00459fa0(lVar3,&local_90,param_3,param_5);
          bVar1 = *(byte *)(lVar3 + 0x198);
        }
      }
      if ((bVar1 >> 1 & 1) == 0) {
        if ((*(byte *)(param_2 + 0x58) >> 1 & 1) == 0) {
          *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(lVar3 + 0xc);
          *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar3 + 0x14);
          if ((param_4 & 1) != 0) {
            *(undefined4 *)(lVar3 + 8) = 0;
          }
        }
      }
      else {
        uVar5 = (ulong)*(uint *)(lVar3 + 0x148);
        *(undefined4 *)(lVar3 + 8) = 0;
        if (*(uint *)(lVar3 + 0x148) != 0) {
          lVar6 = *(long *)(lVar3 + 0x140);
          lVar8 = lVar6;
          do {
            if (*(long *)(lVar8 + 0xe8) != 0) {
              uVar2 = *(uint *)(lVar8 + 0xc0);
              if ((*(uint *)(lVar8 + 0xb8) & 0xf00) != 0x300) {
                uVar2 = *(uint *)(lVar8 + 0xb8);
              }
              lVar7 = (ulong)((uVar2 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar8 + 0xc0) & 0xff);
              if ((int)lVar7 != 0) {
                memcpy(*(void **)(lVar8 + 0x100),*(void **)(lVar8 + 0xf8),lVar7 * 4);
                lVar6 = *(long *)(lVar3 + 0x140);
                uVar5 = (ulong)*(uint *)(lVar3 + 0x148);
              }
            }
            lVar8 = lVar8 + 0x118;
          } while (lVar8 != lVar6 + uVar5 * 0x118);
        }
      }
    }
    else {
      *(undefined4 *)(lVar3 + 0xc) = 0;
      if ((*(byte *)(lVar3 + 0x198) >> 1 & 1) == 0) goto LAB__text__0045ae98;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}


