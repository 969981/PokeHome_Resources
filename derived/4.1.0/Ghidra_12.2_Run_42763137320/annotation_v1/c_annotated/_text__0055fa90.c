/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045FA90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055fa90; name: FUN_.text__0055fa90
 */


void FUN__text__0055fa90(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (uint)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x2c) != '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = (uint)uVar2 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x34) = uVar1 << 4;
  lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (*(long **)(param_1 + 0x10),uVar1 << 4,0x718cc3,0xae); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(param_1 + 0x38) = lVar3;
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined2 *)((long)param_2 + 0x12) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005602d4(param_1 + 0x40,*(undefined8 *)(param_1 + 8),uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00560480(param_1 + 0x40,uVar2,*param_2,*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(ushort *)((long)param_2 + 0x12) = uVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    lVar3 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) goto LAB__text__0055fb60; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x38) = 0;
LAB__text__0055fb60: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x34) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


