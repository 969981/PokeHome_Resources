/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055705C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065705c; name: FUN_.text__0065705c
 */


undefined8 FUN__text__0065705c(long param_1,char *param_2,size_t param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 0x2b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(param_1 + 0x38) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_2 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_3 == 0xffffffffffffffff) { // [自动静态注释] 条件判断/分支
      param_3 = strlen(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    __dest = (void *)FUN__text__006783d4(param_3 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(void **)(param_1 + 0x20) = __dest;
    if (__dest == (void *)0x0) { // [自动静态注释] 条件判断/分支
      uVar1 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(size_t *)(param_1 + 0x78) = param_3;
      if (param_3 != 0) { // [自动静态注释] 条件判断/分支
        memcpy(__dest,param_2,param_3); // [自动静态注释] 内存复制、清零或移动
        __dest = *(void **)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)((long)__dest + param_3) = 0;
      *(code **)(param_1 + 0x28) = FUN__text__006575f0;
      *(undefined1 **)(param_1 + 0x30) = &LAB__text__00657644;
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(code **)(param_1 + 0x38) = FUN__text__00657690;
      *(undefined4 *)(param_1 + 0x18) = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


