/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00139CD8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00239cd8; name: FUN_.text__00239cd8
 */


void FUN__text__00239cd8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00128ca0(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = *(int *)(*(long *)(param_1 + 0x650) + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = FUN__text__00227bb4(*(undefined8 *)(param_1 + 0x640)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (0 < iVar4 != (*(char *)(*(long *)(param_1 + 0x2ec8) + 0x15a) != '\0')) { // [自动静态注释] 条件判断/分支
    *(bool *)(*(long *)(param_1 + 0x2ec8) + 0x15a) = 0 < iVar4;
    FUN__text__003a14e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (iVar4 + 1 < iVar1 != (*(char *)(*(long *)(param_1 + 0x2ed0) + 0x15a) != '\0')) { // [自动静态注释] 条件判断/分支
    *(bool *)(*(long *)(param_1 + 0x2ed0) + 0x15a) = iVar4 + 1 < iVar1;
    FUN__text__003a14e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
  piVar6 = (int *)FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*piVar6 == 5 || *piVar6 == 2) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 0x764); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
    lVar7 = FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_28 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 100) == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = FUN__text__0012ce7c(param_1 + 0x110,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar8,bVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_28 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = FUN__text__0012ce7c(param_1 + 0x110,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar8,!bVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(bool *)(*(long *)(param_1 + 0x7a0) + 0x15a) = *(int *)(param_1 + 0x764) != 0;
    *(bool *)(*(long *)(param_1 + 0x7a8) + 0x15a) = *(int *)(param_1 + 0x764) != 1;
    *(bool *)(*(long *)(param_1 + 0x7b0) + 0x15a) = *(int *)(param_1 + 0x764) != 2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


