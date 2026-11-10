/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E93D4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e93d4; name: FUN_.text__003e93d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003e93d4(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebc14(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = CONCAT44(local_50._4_4_,0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__006ee668(_DAT_008a0448,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__006ee660(uVar5,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a5684(&local_90,*(undefined8 *)(*_DAT_008a0228 + 0x10),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (lVar4 + (lVar2 + lVar1) * 2) - 1U & -lVar4,uVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = *(long *)(param_1 + 0x2c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 0xf0) = local_90;
  if (*(long *)(lVar4 + 0xf8) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar4 + 0xf8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = local_88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar4 + 0xf8) = lVar3;
  *(undefined8 *)(lVar4 + 0x100) = local_80;
  *(undefined8 *)(lVar4 + 0x108) = local_78;
  local_80 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b509c(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_88 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = CONCAT44(local_90._4_4_,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = FUN__text__005b50f0(*(long *)(param_1 + 0x2c8) + 0xf0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_80 = CONCAT44(local_80._4_4_,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = local_58 & 0xff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = _DAT_008a5298; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = lVar2 + lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_60 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0068bb40(param_1 + 0x2d0,_DAT_008a0448,&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


