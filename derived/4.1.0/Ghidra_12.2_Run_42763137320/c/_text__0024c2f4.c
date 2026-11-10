/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024c2f4; name: FUN_.text__0024c2f4
 */


void FUN__text__0024c2f4(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  
  if (param_3 == 0x77800705d1432a6e) {
    uVar1 = 1;
  }
  else {
    if (param_3 == 0x239b94859a8637f0) {
      uVar1 = 2;
      if (*(int *)(param_1 + 0x650) == 2) goto LAB__text__0024c488;
      lVar2 = *(long *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x650) = 2;
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      FUN__text__003c7c60(lVar2,0x72be28,0);
      FUN__text__003c7c60(lVar2,0x72be30,0);
      local_18 = 0x598d0e60e0a45d28;
      lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_18);
      uVar1 = 2;
    }
    else {
      if (param_3 != 0x1892bf9a0b910164) {
        return;
      }
      if (*(int *)(param_1 + 0x650) == 2) {
        uVar1 = 3;
        goto LAB__text__0024c488;
      }
      lVar2 = *(long *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x650) = 2;
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      FUN__text__003c7c60(lVar2,0x72be28,0);
      FUN__text__003c7c60(lVar2,0x72be30,0);
      local_18 = 0x598d0e60e0a45d28;
      lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_18);
      uVar1 = 3;
    }
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
LAB__text__0024c488:
  *(undefined4 *)(*(long *)(param_1 + 0x648) + 0x60) = uVar1;
  return;
}


