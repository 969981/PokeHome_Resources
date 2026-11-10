/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C2010
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2010; name: FUN_.text__004c2010
 */


void FUN__text__004c2010(long *param_1,undefined8 *param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = (undefined8 *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
    if (puVar2[4] == 0) { // [自动静态注释] 条件判断/分支
      *param_2 = 0;
      param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *(uint *)(puVar2 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_2[1] = puVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *(uint *)(puVar2 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 >> 0x1e == 2) { // [自动静态注释] 条件判断/分支
      (**(code **)(*param_1 + 8))(param_1,param_2,puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004c20f0(param_1,*puVar2,puVar2 + 1,*(undefined4 *)((long)puVar2 + 0x14),0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00447104(*puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00400fc0(0,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = (undefined8 *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004c2460(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


