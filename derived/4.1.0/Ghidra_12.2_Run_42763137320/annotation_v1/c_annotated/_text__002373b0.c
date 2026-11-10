/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001373B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002373b0; name: FUN_.text__002373b0
 */


void FUN__text__002373b0(long param_1,ulong param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *(long *)(param_1 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
    plVar9 = (long *)(lVar8 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar9 + 0x10))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar9 + 0x18))(plVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = (param_2 & 0xffffffff) * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a998,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9a0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9a8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9b0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9b8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar8,lVar1 + 0x72a9c0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
  puVar5 = (uint *)FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar7 = *(byte **)((param_2 & 0xffffffff) * 8 + 0x8aa4e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = *pbVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (bVar3 != 0) { // [自动静态注释] 循环/迭代
    pbVar7 = pbVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = (local_38 ^ bVar3) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = *pbVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = FUN__text__0012cdb0(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14c4(uVar6,uVar2 == 2 || uVar2 == 5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*puVar5 < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00237524 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00237530 + (ulong)*(byte *)((ulong)*puVar5 + 0x72a8e0) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


