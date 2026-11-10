/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b5b0; name: FUN_.text__0064b5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0064b5b0(long *param_1,undefined8 param_2,long param_3,uint *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long local_28;
  
  if (*param_1 != 0) {
    return 0;
  }
  lVar2 = FUN__text__0064ed38();
  *param_1 = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    FUN__text__00667b2c(lVar2,0x2712,param_2);
    FUN__text__00667b2c(*param_1,0x34,1);
    FUN__text__00667b2c(*param_1,0x4e,0x82);
    FUN__text__00667b2c(*param_1,0xd,0x82);
    FUN__text__00667b2c(*param_1,0x4e2b,_DAT_008a6528);
    FUN__text__00667b2c(*param_1,0x272f,0x70f683);
    FUN__text__00667b2c(*param_1,0x54,1);
    param_1[0x17] = 0;
    param_1[0xc] = param_1[3];
    *(undefined4 *)(param_1 + 0xb) = 0;
    memset((void *)param_1[3],0,0x2000000);
    FUN__text__00667b2c(*param_1,0x2711,param_1 + 0xb);
    if (param_3 != 0) {
      FUN__text__0064b7e8(param_1,param_3);
    }
    if (param_4 != (uint *)0x0) {
      lVar2 = param_1[0x18];
      if (*param_4 != 0) {
        uVar5 = 1;
        do {
          lVar2 = FUN__text__0066bcc8(lVar2,*(undefined8 *)(param_4 + uVar5 * 2));
          param_1[0x18] = lVar2;
          bVar1 = uVar5 < *param_4;
          uVar5 = uVar5 + 1;
        } while (bVar1);
      }
      FUN__text__00667b2c(*param_1,0x2727);
    }
    if (DAT_00c4f590 != '\0') {
      FUN__text__00667b2c(*param_1,0x2797,&DAT_00c4f590);
    }
    uVar5 = FUN__text__0064b8a0(param_1,param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    FUN__text__00240ddc(&local_28,param_1[0x11],0x760028);
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    }
    param_1[2] = local_28;
    pcVar4 = *(code **)(local_28 + 0x378);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(local_28 + 0x380) = 0;
      *(undefined8 *)(local_28 + 0x388) = 0;
      *(undefined8 *)(local_28 + 0x370) = 0;
      *(undefined8 *)(local_28 + 0x378) = 0;
      (*pcVar4)(local_28 + 0x390);
    }
    *(long **)(local_28 + 0x390) = param_1;
    *(code **)(local_28 + 0x370) = FUN__text__0064bb9c;
    *(undefined **)(local_28 + 0x378) = &DAT__text__0064bdf4;
    *(undefined1 **)(local_28 + 0x380) = &LAB__text__0064bdf8;
    *(undefined1 **)(local_28 + 0x388) = &LAB__text__0064be04;
    FUN__text__005e896c(param_1[2],0x71c4ef,0xffffffff,0x10);
    uVar3 = 1;
  }
  return uVar3;
}


