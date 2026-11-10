/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F4018
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4018; name: FUN_.text__005f4018
 */


void FUN__text__005f4018(long param_1,undefined8 param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = FUN__text__003e96a0(*(undefined8 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0) = uVar4;
  uVar3 = FUN__text__006bd81c(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                               (*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar3 & 0xffff) < param_3) { // [自动静态注释] 条件判断/分支
    FUN__text__003e9990(*(undefined8 *)(param_1 + 0x88),uVar4,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(ushort *)(lVar7 + 0x114) >> 2 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar7 + 0x108) != lVar5) { // [自动静态注释] 条件判断/分支
      uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar8 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(ushort *)(lVar7 + 0x114) = uVar8 | *(ushort *)(lVar7 + 0x114) & 0xfffb;
    if (*(long *)(lVar7 + 0x108) != lVar5) { // [自动静态注释] 条件判断/分支
      *(long *)(lVar7 + 0x108) = lVar5;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar6 = (long *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(*plVar6 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6[3] = (ulong)*(uint *)(*plVar6 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar6[2] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x18);
  *(byte *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0 + 0x92) =
       *(byte *)(param_1 + 0x9a);
  *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0 + 0x90) = 0;
  cVar1 = *(char *)(param_1 + 0x9a) + '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x9a) = cVar1;
  if (*(char *)(param_1 + 0x98) == cVar1) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x111) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


