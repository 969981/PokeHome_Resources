/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064fb7c; name: FUN_.text__0064fb7c
 */


void FUN__text__0064fb7c(long *param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  undefined4 local_24;
  
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    return;
  }
  lVar6 = *param_1;
  memset(auStack_140,0,0x100);
  memset(auStack_240,0,0x100);
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x8000002) == 0) {
    memset(auStack_2c0,0,0x80);
    local_24 = 0x100;
    iVar1 = nnsocketGetPeerName(param_2,auStack_140,&local_24);
    if (iVar1 == 0) {
      local_24 = 0x100;
      memset(auStack_240,0,0x100);
      iVar1 = nnsocketGetSockName(param_2,auStack_240,&local_24);
      if (iVar1 == 0) {
        uVar7 = FUN__text__0064fda0(auStack_140,(void *)((long)param_1 + 0x1a2),param_1 + 0x3a);
        if ((uVar7 & 1) == 0) {
          puVar4 = (uint *)__errno_location();
          uVar7 = (ulong)*puVar4;
          uVar3 = FUN__text__0066c474(uVar7,auStack_2c0,0x80);
          uVar5 = 0x7180b1;
        }
        else {
          memcpy(param_1 + 0x11,(void *)((long)param_1 + 0x1a2),0x2e);
          uVar7 = FUN__text__0064fda0(auStack_240,param_1 + 0x3b,param_1 + 0x41);
          if ((uVar7 & 1) != 0) {
            lVar6 = *param_1;
            goto LAB__text__0064fbe4;
          }
          puVar4 = (uint *)__errno_location();
          uVar7 = (ulong)*puVar4;
          uVar3 = FUN__text__0066c474(uVar7,auStack_2c0,0x80);
          uVar5 = 0x71e9f3;
        }
      }
      else {
        uVar2 = nnsocketGetLastErrno();
        uVar7 = uVar2 & 0xffffffff;
        uVar3 = FUN__text__0066c474(uVar2,auStack_2c0,0x80);
        uVar5 = 0x70b1c7;
      }
    }
    else {
      uVar2 = nnsocketGetLastErrno();
      uVar7 = uVar2 & 0xffffffff;
      uVar3 = FUN__text__0066c474(uVar2,auStack_2c0,0x80);
      uVar5 = 0x71a39b;
    }
    FUN__text__0066713c(lVar6,uVar5,uVar7,uVar3);
  }
  else {
LAB__text__0064fbe4:
    memcpy((void *)(lVar6 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e);
    memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e);
    *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
    *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
    *(long *)(*param_1 + 0x1678) = param_1[0x3a];
    *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  }
  return;
}


