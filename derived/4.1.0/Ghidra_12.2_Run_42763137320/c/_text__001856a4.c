/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001856a4; name: FUN_.text__001856a4
 */


void FUN__text__001856a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  if (param_3 < 0x92509626c2ad4d7) {
    if (param_3 < 0x92505626c2ace0b) {
      if (param_3 == -0x40087541631ac5cd) {
        *(undefined4 *)(param_1 + 0x63c) = 7;
        FUN__text__00185968(param_1);
        return;
      }
      if (param_3 != -0x212bfe8e43d6c64e) {
        if (param_3 == 0x92504626c2acc58) {
          *(undefined4 *)(param_1 + 0x63c) = 6;
          FUN__text__00185968(param_1);
          return;
        }
        return;
      }
      *(undefined4 *)(param_1 + 0x63c) = 0;
      goto LAB__text__0018591c;
    }
    if (param_3 == 0x92505626c2ace0b) {
      *(undefined4 *)(param_1 + 0x63c) = 5;
      FUN__text__00185968(param_1);
      return;
    }
    if (param_3 == 0x92506626c2acfbe) {
      uVar2 = 4;
    }
    else {
      if (param_3 != 0x92507626c2ad171) {
        return;
      }
      uVar2 = 3;
    }
  }
  else {
    if (param_3 < 0x252e42ffe3be86ee) {
      if (param_3 == 0x92509626c2ad4d7) {
        *(undefined4 *)(param_1 + 0x63c) = 10;
        FUN__text__00185968(param_1);
        return;
      }
      if (param_3 == 0x9250a626c2ad68a) {
        *(undefined4 *)(param_1 + 0x63c) = 9;
        FUN__text__00185968(param_1);
        return;
      }
      if (param_3 == 0x9250b626c2ad83d) {
        *(undefined4 *)(param_1 + 0x63c) = 8;
        FUN__text__00185968(param_1);
        return;
      }
      return;
    }
    if (param_3 == 0x252e42ffe3be86ee) {
      (**(code **)(param_1 + 0x690))(param_1 + 0x6b0);
      FUN__text__00185590(param_1,0);
      return;
    }
    if (param_3 != 0x2ad333342a3faa86) {
      if (param_3 != 0x2ad334342a3fac39) {
        return;
      }
      *(undefined4 *)(param_1 + 0x63c) = 1;
      goto LAB__text__0018591c;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x63c) = uVar2;
LAB__text__0018591c:
  FUN__text__00128ca0(param_1,0,1);
  *(undefined1 *)(param_1 + 0x63b) = 1;
  local_28 = 0x431e769ffc1ad350;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar1,0);
  return;
}


