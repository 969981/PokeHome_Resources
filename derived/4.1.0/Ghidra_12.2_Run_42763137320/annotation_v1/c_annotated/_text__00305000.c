/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00205000
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305000; name: FUN_.text__00305000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00305000(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_60 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((&DAT_0094c1c0)[param_1] == '\0') { // [自动静态注释] 条件判断/分支
    memset((void *)(param_1 + 0x50),0,0x94c170); // [自动静态注释] 内存复制、清零或移动
    __src = (void *)FUN__text__003051c8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (__src != (void *)0x0) { // [自动静态注释] 条件判断/分支
      memcpy((void *)(param_1 + 0x50),__src,0x94c170); // [自动静态注释] 内存复制、清零或移动
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined2 *)(&DAT_0094c1ca + param_1) = 0;
    *(undefined8 *)(&DAT_0094c1c2 + param_1) = 0;
    uVar1 = DAT_008e1640; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = FUN__text__0011b95c(DAT_008e15f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_50 = 0x10015f008c54000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    std::string::assign((char *)local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00309ac0(uVar1,local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((local_48[0] & 1) != 0) { // [自动静态注释] 条件判断/分支
      operator_delete(local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    memset((void *)(param_1 + 0x50),0,0x94c171); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


