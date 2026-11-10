/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A9624
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9624; name: FUN_.text__003a9624
 */


undefined8 FUN__text__003a9624(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(long *)(param_1 + 0x408) + 8);
    local_40[0] = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(**(long **)(param_1 + 0x98) + 0xd0)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x98),param_1 + 0x3d8,local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x85) = 0;
    FUN__text__003a1648(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a9034(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e927c(local_40,0x8820c0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003c1e4c(local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_28 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(*(long *)(param_1 + 0x3d0) + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = *(int *)(param_1 + 0x400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(int *)(param_1 + 0x404); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x3b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(lVar1 + 0x149) = 1;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(ulong *)(lVar1 + 0x160) = CONCAT44((float)iVar4,(float)iVar3);
  if ((*(long *)(lVar1 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(lVar1 + 0xb8) != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(lVar1 + 0x98) + 0x78))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a1648(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


