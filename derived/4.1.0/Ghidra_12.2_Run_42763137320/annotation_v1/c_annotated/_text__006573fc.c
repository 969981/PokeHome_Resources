/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005573FC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006573fc; name: FUN_.text__006573fc
 */


undefined8 * FUN__text__006573fc(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined8 *)FUN__text__006783d4(0x1c0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      memset(puVar2 + 2,0,0x1b0); // [自动静态注释] 内存复制、清零或移动
      puVar2[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = uVar3;
      puVar2[1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        puVar1 = (undefined8 *)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar1[2] = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


