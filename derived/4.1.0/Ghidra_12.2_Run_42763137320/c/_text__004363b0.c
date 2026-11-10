/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004363b0; name: FUN_.text__004363b0
 */


undefined8
FUN__text__004363b0(long param_1,long *param_2,undefined4 *param_3,char *param_4,undefined8 param_5,
                   undefined4 param_6,char param_7)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  char local_b4 [4];
  long local_b0;
  long local_a8;
  long *plStack_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_68;
  undefined4 local_48;
  char local_44 [4];
  
  lVar1 = param_1 + 0x28;
  local_b0 = 0;
  local_44[0] = param_7;
  lVar6 = FUN__text__0043748c(lVar1,param_2,param_4,&local_b0);
  cVar5 = *param_4;
  if ((lVar6 == 0) || (cVar5 != '\0')) {
    if (lVar6 == 0) {
      return 0x34;
    }
  }
  else {
    *(undefined4 *)(lVar6 + 0x20) = 0;
    lVar2 = param_1 + 0x58;
    if (local_b0 != 0) {
      lVar2 = local_b0 + 8;
    }
    local_98 = param_2[2];
    local_90 = param_2[3];
    local_88 = param_2[4];
    lStack_80 = param_2[5];
    local_a8 = *param_2;
    plStack_a0 = (long *)param_2[1];
    FUN__text__00438210(lVar2,lVar6 + 8,&local_a8);
    cVar5 = *param_4;
  }
  local_b4[0] = '\0';
  puVar3 = (undefined4 *)(param_1 + 0x70);
  if (local_b0 != 0) {
    puVar3 = (undefined4 *)(local_b0 + 0x20);
  }
  if (cVar5 != '\0') {
    puVar3 = (undefined4 *)(lVar6 + 0x20);
  }
  local_90._0_5_ = CONCAT14(cVar5,param_6);
  uVar4 = *puVar3;
  local_a8 = param_1;
  plStack_a0 = param_2;
  local_98 = param_5;
  local_48 = uVar4;
  FUN__text__004365fc(lVar6,&local_48,param_3,&local_a8,local_44,local_b4);
  if (local_b4[0] != '\0') {
    uStack_6c = *param_3;
    *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x89) + '\x01';
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + '\x04';
    local_78 = param_1;
    local_70 = uVar4;
    local_68 = param_2;
    FUN__text__00438df0(param_1 + 0x78,&local_78);
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + -4;
  }
  if ((((local_44[0] != '\0') &&
       (uVar7 = FUN__text__00437084(param_1,param_2,lVar6,local_b0,param_5), (uVar7 & 1) != 0)) &&
      (uVar7 = FUN__text__004394b0(param_1 + 0x40,lVar1,param_2), (uVar7 & 1) != 0)) &&
     ((*(char *)(param_1 + 0x44) == '\0' && (*(int *)(param_1 + 0x50) == 0)))) {
    FUN__text__00436aa0(lVar1);
  }
  if ((*param_4 == '\0') &&
     (uVar7 = FUN__text__0043d900(*(undefined8 *)(param_1 + 8),param_2), (uVar7 & 1) == 0)) {
    FUN__text__004371ac(param_1,param_2,0,1);
    return 0x34;
  }
  return 1;
}


