/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e0f0; name: FUN_.text__0029e0f0
 */


void FUN__text__0029e0f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__s;
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  char local_3c [4];
  long local_38;
  
  __s = (void *)(param_1 + 0x68);
  *(undefined8 *)(FUN__text__0040007c + param_1 + 4) = *param_3;
  uVar1 = param_2[1];
  *(undefined8 *)(&DAT__text__00400070 + param_1) = *param_2;
  *(undefined8 *)(&DAT__text__00400078 + param_1) = uVar1;
  memset(__s,0,0x400000);
  FUN__text__00240ddc(&local_38,*(undefined8 *)(param_1 + 8),0x732820);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x58) = local_38;
  pcVar3 = *(code **)(local_38 + 0x378);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(local_38 + 0x380) = 0;
    *(undefined8 *)(local_38 + 0x388) = 0;
    *(undefined8 *)(local_38 + 0x370) = 0;
    *(undefined8 *)(local_38 + 0x378) = 0;
    (*pcVar3)(local_38 + 0x390);
  }
  *(undefined4 *)(local_38 + 0x394) = 1;
  *(code **)(local_38 + 0x370) = FUN__text__0029ea74;
  *(undefined **)(local_38 + 0x378) = &DAT__text__0029ef38;
  *(undefined1 *)(local_38 + 0x390) = 0;
  *(long *)(local_38 + 0x398) = param_1;
  *(undefined1 **)(local_38 + 0x380) = &LAB__text__0029f4b4;
  *(undefined1 **)(local_38 + 0x388) = &LAB__text__0029f4c0;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x58),0x7132c5,0xffffffff,0x10);
  lVar4 = *(long *)(param_1 + 0x58);
  do {
    if (lVar4 == 0) {
LAB__text__0029e238:
      local_3c[0] = '\0';
      uVar2 = FUN__text__0029e2bc(param_1,__s,*(undefined8 *)(&DAT__text__00400068 + param_1),
                                  local_3c);
      if ((uVar2 & 1) != 0) {
        if (local_3c[0] == '\0') {
          FUN__text__002a17b0(*(undefined8 *)(param_1 + 0x60),__s);
          *(undefined4 *)(param_1 + 0x40008c) = 2;
          return;
        }
        *(undefined4 *)(param_1 + 0x40008c) = 3;
        return;
      }
LAB__text__0029e278:
      *(undefined4 *)(param_1 + 0x40008c) = 5;
      return;
    }
    if ((*(byte *)(lVar4 + 0x25a) & 1) != 0) {
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x58));
      lVar4 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      if (*(int *)(param_1 + 0x400088) != 0) goto LAB__text__0029e278;
      goto LAB__text__0029e238;
    }
    nn::os::SleepThread(1000000);
    lVar4 = *(long *)(param_1 + 0x58);
  } while( true );
}


