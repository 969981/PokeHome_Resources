/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A9338
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9338; name: FUN_.text__003a9338
 */


bool FUN__text__003a9338(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x3d0) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    local_40 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uStack_38 = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0x3c8));
    local_40 = &local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003aa1c0(param_1,&local_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_40 = *(long **)(local_18 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *(long *)(param_1 + 0x3b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined1 *)(lVar2 + 0x149) = 1;
    if ((*(long *)(lVar2 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(lVar2 + 0xb0) != 0)) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar2 + 0x98) + 0x78))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


