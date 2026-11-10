/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00207CA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307ca0; name: FUN_.text__00307ca0
 */


void FUN__text__00307ca0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003227d0(&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__003028c4(local_28,param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar8 = *(undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar7 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(lVar6 + *(long *)(lVar7 + 0x7b498) * 8 + 0x7b4a0) = uVar8;
    lVar6 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar7 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar7 = *(long *)(lVar7 + 0x7b498); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = lVar6 + lVar7 * 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = FUN__text__00637404(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(lVar9 + 0x7b7c0) = uVar8;
    uVar3 = FUN__text__006312d8(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(lVar9 + 0x7b7c8) = uVar3;
    uVar3 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(lVar9 + 0x7b7ca) = uVar3;
    uVar3 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(lVar9 + 0x7b7cc) = uVar3;
    uVar1 = FUN__text__00632408(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar9 + 0x7b7ce) = uVar1;
    uVar3 = FUN__text__006312e0(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(lVar9 + 0x7b7d0) = uVar3;
    uVar1 = FUN__text__0063378c(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar9 + 0x7b7d2) = uVar1;
    uVar1 = FUN__text__006312d0(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar9 + 0x7b7d3) = uVar1;
    FUN__text__00633ae0(*(undefined8 *)(param_1 + 0x58),lVar9 + 0x7b7d4,0x1a); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar2 = FUN__text__00634538(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar9 + 0x7b7ee) = bVar2 & 1;
    if (*(short *)(lVar9 + 0x7b7ca) == 0x365) { // [自动静态注释] 条件判断/分支
      uVar4 = FUN__text__00631324(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = uVar4 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(lVar6 + lVar7 * 0x38 + 0x7b7f0) = uVar4;
    lVar6 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(lVar6 + 0x7b498) = *(long *)(lVar6 + 0x7b498) + 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


