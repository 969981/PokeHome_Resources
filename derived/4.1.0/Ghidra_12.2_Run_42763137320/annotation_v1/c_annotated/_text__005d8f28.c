/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D8F28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8f28; name: FUN_.text__005d8f28
 */


undefined4 FUN__text__005d8f28(long param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x160; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005d9900(&local_28,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x78) != 0) { // [自动静态注释] 条件判断/分支
      puVar2 = (undefined8 *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = FUN__text__005d9760(lVar1,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005d97b0(lVar1,uVar5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = *(long *)(param_1 + 0x188) + param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = *(long *)(param_1 + 0x180); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_3 <= *(long *)(param_1 + 0x180)) { // [自动静态注释] 条件判断/分支
        lVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_1 + 0x188) = lVar1;
      goto joined_r0x005d8fdc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__005dd0cc(param_1 + 0x90,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x98);
joined_r0x005d8fdc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


