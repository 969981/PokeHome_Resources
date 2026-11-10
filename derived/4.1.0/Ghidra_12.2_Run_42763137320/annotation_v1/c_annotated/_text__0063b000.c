/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0053B000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063b000; name: FUN_.text__0063b000
 */


undefined8 FUN__text__0063b000(long *param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0063758c(uVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0063758c(uVar2,param_2 + 0x158); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0063758c(uVar2,param_2 + 0x2b0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0063758c(uVar2,param_2 + 0x408); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0063758c(uVar2,param_2 + 0x560); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0063758c(uVar2,param_2 + 0x6b8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    thunk_FUN__text__0063758c(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x158); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x2b0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x408); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x560); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__0063758c(uVar2,param_2 + 0x6b8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(char *)(param_2 + 0x810) = (char)param_1[0x11];
  uVar1 = *(undefined1 *)((long)param_1 + 0x89); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_2 + 0x812) = 0;
  *(undefined1 *)(param_2 + 0x811) = uVar1;
  return 0x814; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


