/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D8E38
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8e38; name: FUN_.text__005d8e38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005d8e38(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005d9900(&local_28,param_1 + 0x160); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x78) != 0) { // [自动静态注释] 条件判断/分支
      puVar1 = (undefined8 *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = FUN__text__005d9760(param_1 + 0x160,*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x180) = lVar4;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(param_1 + 0x171) = 1;
      goto joined_r0x005d8ef0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x171) = 0;
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = _DAT_0089f5d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = (undefined8 *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x78) != 0) { // [自动静态注释] 条件判断/分支
    puVar2 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005dd084(param_1 + 0x90,*puVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x90);
joined_r0x005d8ef0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


