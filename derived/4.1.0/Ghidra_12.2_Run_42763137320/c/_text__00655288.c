/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00655288; name: FUN_.text__00655288
 */


int FUN__text__00655288(long param_1,long *param_2,undefined4 param_3,char *param_4,long param_5,
                       undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = 0;
  sVar6 = strlen(param_4);
  if (sVar6 - 0x1f1 < 0xfffffffffffffdff) {
    uVar8 = 4;
LAB__text__00655368:
    FUN__text__0066713c(param_1,0x7134c7,uVar8);
    return 0x1b;
  }
  *(undefined4 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x10000;
  *(undefined2 *)(param_2 + 2) = 0x100;
  plVar2 = param_2 + 3;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  pcVar7 = strchr(param_4,0x2e);
  while (pcVar7 != (char *)0x0) {
    uVar10 = (long)pcVar7 - (long)param_4;
    if (0x3f < uVar10) goto LAB__text__00655360;
    *(char *)plVar2 = (char)uVar10;
    memcpy((undefined1 *)((long)plVar2 + 1),param_4,uVar10);
    plVar2 = (long *)((undefined1 *)((long)plVar2 + 1) + uVar10);
    param_4 = param_4 + uVar10 + 1;
    pcVar7 = strchr(param_4,0x2e);
  }
  sVar6 = strlen(param_4);
  if (0x3f < sVar6) {
LAB__text__00655360:
    uVar8 = 1;
    param_2[0x42] = 0;
    goto LAB__text__00655368;
  }
  lVar1 = (long)param_2 + 0xc;
  *(char *)plVar2 = (char)sVar6;
  memcpy((undefined1 *)((long)plVar2 + 1),param_4,sVar6);
  puVar3 = (undefined2 *)((undefined1 *)((long)plVar2 + 1) + sVar6);
  *puVar3 = 0;
  *(char *)(puVar3 + 1) = (char)param_3;
  *(undefined2 *)((long)puVar3 + 3) = 0x100;
  lVar9 = (long)puVar3 + (5 - lVar1);
  *(undefined4 *)(param_2 + 1) = param_3;
  param_2[0x44] = 0;
  param_2[0x42] = lVar9;
  param_2[0x43] = 0;
  if ((*(byte *)(param_1 + 0xf47) >> 1 & 1) == 0) {
    lVar9 = 0;
LAB__text__006553f4:
    iVar4 = FUN__text__0064fa18(param_1,0,1);
    iVar5 = FUN__text__00670314(&local_68);
    if ((((((iVar5 == 0) && (iVar5 = FUN__text__00667b2c(local_68,0x2712,param_5), iVar5 == 0)) &&
          (iVar5 = FUN__text__00667b2c(local_68,0x4e2b,FUN__text__00655ff8), iVar5 == 0)) &&
         (iVar5 = FUN__text__00667b2c(local_68,0x2711,param_2 + 0x43), iVar5 == 0)) &&
        (((*(byte *)(param_1 + 0xf47) >> 1 & 1) != 0 ||
         ((iVar5 = FUN__text__00667b2c(local_68,0x271f,lVar1), iVar5 == 0 &&
          (iVar5 = FUN__text__00667b2c(local_68,0x3c,param_2[0x42]), iVar5 == 0)))))) &&
       ((iVar5 = FUN__text__00667b2c(local_68,0x2727,param_7), iVar5 == 0 &&
        (((iVar5 = FUN__text__00667b2c(local_68,0x54,4), iVar5 == 0 &&
          (iVar5 = FUN__text__00667b2c(local_68,0xb5,2), iVar5 == 0)) &&
         (iVar5 = FUN__text__00667b2c(local_68,0x9b,(long)iVar4), iVar5 == 0)))))) {
      uVar10 = *(ulong *)(param_1 + 0xf40);
      if (((uint)uVar10 >> 0x1a & 1) != 0) {
        iVar5 = FUN__text__00667b2c(local_68,0x29,1);
        if (iVar5 != 0) goto LAB__text__00655480;
        uVar10 = *(ulong *)(param_1 + 0xf40);
      }
      if (((((((((((uVar10 >> 0x21 & 1) == 0) ||
                 (iVar5 = FUN__text__00667b2c(local_68,99,1), iVar5 == 0)) &&
                (((*(byte *)(param_1 + 0xb18) >> 1 & 1) == 0 ||
                 (iVar5 = FUN__text__00667b2c(local_68,0xe9,1), iVar5 == 0)))) &&
               (((*(byte *)(param_1 + 0xac1) >> 1 & 1) == 0 ||
                (iVar5 = FUN__text__00667b2c(local_68,0x51,2), iVar5 == 0)))) &&
              (((*(byte *)(param_1 + 0xb99) >> 1 & 1) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0xf9,2), iVar5 == 0)))) &&
             (((((*(byte *)(param_1 + 0xac1) & 1) == 0 ||
                (iVar5 = FUN__text__00667b2c(local_68,0x40,1), iVar5 == 0)) &&
               (((*(byte *)(param_1 + 0xb99) & 1) == 0 ||
                (iVar5 = FUN__text__00667b2c(local_68,0xf8,1), iVar5 == 0)))) &&
              (((*(byte *)(param_1 + 0xac1) >> 2 & 1) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0xe8,1), iVar5 == 0)))))) &&
            ((*(long *)(param_1 + 0xd60) == 0 ||
             (iVar5 = FUN__text__00667b2c(local_68,0x2751), iVar5 == 0)))) &&
           (((((*(long *)(param_1 + 0xd68) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0x2806), iVar5 == 0)) &&
              ((*(long *)(param_1 + 0xd50) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0x2771), iVar5 == 0)))) &&
             (((*(long *)(param_1 + 0xd58) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0x2807), iVar5 == 0)) &&
              ((*(long *)(param_1 + 0xdb8) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0x27b9), iVar5 == 0)))))) &&
            ((((*(long *)(param_1 + 0xdc0) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0x2814), iVar5 == 0)) &&
              (((*(byte *)(param_1 + 0xb18) & 1) == 0 ||
               (iVar5 = FUN__text__00667b2c(local_68,0xac,1), iVar5 == 0)))) &&
             ((*(long *)(param_1 + 0xda8) == 0 ||
              (iVar5 = FUN__text__00667b2c(local_68,0x275c), iVar5 == 0)))))))) &&
          ((*(long *)(param_1 + 0xda0) == 0 ||
           (iVar5 = FUN__text__00667b2c(local_68,0x275d), iVar5 == 0)))) &&
         ((((((*(byte *)(param_1 + 0xb18) >> 3 & 1) == 0 ||
             (iVar5 = FUN__text__00667b2c(local_68,0xd8,2), iVar5 == 0)) &&
            (((*(byte *)(param_1 + 0xbf0) >> 3 & 1) == 0 ||
             (iVar5 = FUN__text__00667b2c(local_68,0x105,2), iVar5 == 0)))) &&
           ((*(long *)(param_1 + 0xae0) == 0 ||
            (iVar5 = FUN__text__00667b2c(local_68,0x4e8c), iVar5 == 0)))) &&
          ((*(long *)(param_1 + 0xae8) == 0 ||
           (iVar5 = FUN__text__00667b2c(local_68,0x277d), iVar5 == 0)))))) {
        *(code **)(local_68 + 0xf18) = FUN__text__00656070;
        *(long *)(local_68 + 0xf20) = param_1;
        *param_2 = local_68;
        iVar5 = FUN__text__00659e30(param_6);
        if (iVar5 == 0) {
          FUN__text__006783e4(lVar9);
          return 0;
        }
        iVar5 = 0;
      }
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    iVar5 = FUN__text__0065659c(param_1,lVar1,lVar9,&local_70,&local_78);
    if (iVar5 == 0) {
      lVar9 = FUN__text__00659a28(0x70d4c6,param_5,local_70);
      FUN__text__006783e4(local_70);
      if (lVar9 != 0) {
        param_5 = lVar9;
        goto LAB__text__006553f4;
      }
      iVar5 = 0x1b;
    }
    lVar9 = 0;
  }
LAB__text__00655480:
  FUN__text__006783e4(lVar9);
  FUN__text__0066fef4(local_68);
  return iVar5;
}


