/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00167cf8; name: FUN_.text__00167cf8
 */


undefined8 FUN__text__00167cf8(long param_1)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 0x78) == 2) {
    return 1;
  }
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 == 0) {
    return 0;
  }
  if ((((*(char *)(lVar1 + 0x170) != '\0') && (*(long *)(param_1 + 0x1d8) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x1d8) + 0x170) != '\0')) &&
     (((((*(long *)(param_1 + 0x328) != 0 && (*(char *)(*(long *)(param_1 + 0x328) + 0x170) != '\0')
         ) && ((*(long *)(param_1 + 0x438) != 0 &&
               ((*(char *)(*(long *)(param_1 + 0x438) + 0x170) != '\0' &&
                (*(long *)(param_1 + 0x588) != 0)))))) &&
       (*(char *)(*(long *)(param_1 + 0x588) + 0x170) != '\0')) &&
      (((((*(long *)(param_1 + 0x698) != 0 &&
          (*(char *)(*(long *)(param_1 + 0x698) + 0x170) != '\0')) &&
         (*(long *)(param_1 + 0x7e8) != 0)) &&
        ((*(char *)(*(long *)(param_1 + 0x7e8) + 0x170) != '\0' && (*(long *)(param_1 + 0x8f8) != 0)
         ))) && ((*(char *)(*(long *)(param_1 + 0x8f8) + 0x170) != '\0' &&
                 ((*(long *)(param_1 + 0xa48) != 0 &&
                  (*(char *)(*(long *)(param_1 + 0xa48) + 0x170) != '\0')))))))))) {
    if ((((*(long *)(param_1 + 0xb58) != 0) &&
         (((((*(char *)(*(long *)(param_1 + 0xb58) + 0x170) != '\0' &&
             (*(long *)(param_1 + 0xca8) != 0)) &&
            (*(char *)(*(long *)(param_1 + 0xca8) + 0x170) != '\0')) &&
           ((*(long *)(param_1 + 0xdb8) != 0 &&
            (*(char *)(*(long *)(param_1 + 0xdb8) + 0x170) != '\0')))) &&
          (*(long *)(param_1 + 0xf08) != 0)))) &&
        (((*(char *)(*(long *)(param_1 + 0xf08) + 0x170) != '\0' &&
          (*(long *)(param_1 + 0x1018) != 0)) &&
         ((*(char *)(*(long *)(param_1 + 0x1018) + 0x170) != '\0' &&
          (((*(long *)(param_1 + 0x1168) != 0 &&
            (*(char *)(*(long *)(param_1 + 0x1168) + 0x170) != '\0')) &&
           (*(long *)(param_1 + 0x1278) != 0)))))))) &&
       ((((*(char *)(*(long *)(param_1 + 0x1278) + 0x170) != '\0' &&
          (*(long *)(param_1 + 0x13c8) != 0)) &&
         (*(char *)(*(long *)(param_1 + 0x13c8) + 0x170) != '\0')) &&
        (((*(long *)(param_1 + 0x14d8) != 0 &&
          (*(char *)(*(long *)(param_1 + 0x14d8) + 0x170) != '\0')) &&
         ((*(long *)(param_1 + 0x1628) != 0 &&
          (((*(char *)(*(long *)(param_1 + 0x1628) + 0x170) != '\0' &&
            (*(long *)(param_1 + 0x1738) != 0)) &&
           (*(char *)(*(long *)(param_1 + 0x1738) + 0x170) != '\0')))))))))) {
      local_28 = *(undefined8 *)(lVar1 + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0xb8) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x1d0);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x328) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x318) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x318) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x318) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x430);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x588) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x578) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x578) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x578) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x690);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x7e8) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x7d8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x7d8) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x7d8) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x8f0);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0xa48) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0xa38) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xa38) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0xa38) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0xb50);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0xca8) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0xc98) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xc98) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0xc98) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0xdb0);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0xf08) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0xef8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xef8) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0xef8) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x1010);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x1168) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x1158) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1158) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x1158) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x1270);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x13c8) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x13b8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x13b8) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x13b8) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x14d0);
      local_28 = *(undefined8 *)(*(long *)(param_1 + 0x1628) + 400);
      FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 0x1840),&local_28);
      if (*(long *)(param_1 + 0x1618) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1618) + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_1 + 0x1618) = local_8;
      FUN__text__005f2c98(local_8,param_1 + 0x1730);
      *(undefined4 *)(param_1 + 0x78) = 2;
      return 1;
    }
  }
  return 0;
}


