/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BCD24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bcd24; name: FUN_.text__005bcd24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bcd24(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005b8430(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                       (*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xfc) * 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      *(undefined8 *)(param_1 + 0x60));
  FUN__text__005a1bc8(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a1b30(*(undefined8 *)(param_1 + 0xe0),(long)*(int *)(param_1 + 0xfc), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x60));
  FUN__text__005d7ac0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar3 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006edf00(0x3f800000, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*_DAT_008a0300 * 0x168);
  lVar5 = *(long *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006ec978(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar3 * 0x168, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0xf8),
                        *(undefined4 *)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x98) + 0x58) + 0x6c),0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = *(int *)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined4 *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar3 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__006ec64c(lVar5 + 0x58,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006eca30(lVar4,uVar2,1,&local_40,*(undefined4 *)(lVar5 + 0xc4),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  thunk_FUN__text__006ec64c(lVar5 + 0x58,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ecab0(lVar4,uVar2,1,&local_40,*(undefined4 *)(lVar5 + 0xc4),0,iVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


