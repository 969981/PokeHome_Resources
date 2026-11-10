/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00245968; name: FUN_.text__00245968
 */


void FUN__text__00245968(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_28;
  
  if (param_2 != 0) {
    local_28 = 0x6ed222255d5cc02f;
    lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    local_28 = 0xd17179f08793549f;
    lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    local_28 = 0xbe629e44d60a57cc;
    lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    local_28 = 0x8a10f848eef0c665;
    lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    local_28 = 0xaa2b60ebb0d90ea4;
    lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    local_28 = 0xcd97e60bf719a9d5;
    lVar3 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if ((lVar3 != 0) &&
       (uVar1 = *(int *)(param_2 + 0x2c) - 0xb,
       *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | uVar1 < 2, uVar1 < 2)) {
      lVar5 = *(long *)(param_1 + 0x560);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN__text__003c6808(lVar5,*(undefined1 *)(param_2 + 0x49),lVar3,0,0);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    lVar3 = *(long *)(param_1 + 0x6d0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_28 = *(undefined8 *)((long)*(int *)(param_2 + 0x2c) * 8 + 0x72bc20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar3,&local_28,lVar5);
    uVar4 = FUN__text__005f3244(lVar5);
    FUN__text__0012c9f0(param_1 + 0x110,0x72bcf8,uVar4,0xb);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    if (*(char *)(param_2 + 0x38) == '\0') {
      uVar4 = 0x75a35d51f23dddbc;
      if ((*(char *)(param_2 + 0x39) == '\0') &&
         (uVar4 = 0x75a6e351f240f745, *(char *)(param_2 + 0x3a) != '\0')) {
        uVar4 = 0x75a35d51f23dddbc;
      }
    }
    else {
      uVar4 = 0x7e9b0251f7684516;
    }
    FUN__text__00245e28(param_1,0x5355c25307476181,uVar4);
    uVar4 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x72bd30);
    if (((*(int *)(param_1 + 0x6e8) == 2) && (uVar1 = *(byte *)(param_2 + 0x49) - 1, uVar1 < 7)) &&
       ((0x5fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      lVar3 = *(long *)(param_1 + *(long *)((long)(char)uVar1 * 8 + 0x72bd48) * 8 + 0xa10);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x578);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar2 = FUN__text__003cde90(*(undefined4 *)(param_2 + 0x2c));
    FUN__text__003cdea0(lVar3,uVar2,uVar4,0,0);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


