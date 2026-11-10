/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000DC520
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc520; name: FUN_.text__001dc520
 */


void FUN__text__001dc520(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_17c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_178; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_170; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_168; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_160; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_138; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_128; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_120; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_118 [100]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_b4 [25]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)(param_1 + 0x8b3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0019c35c(auStack_118); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_17c = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_138 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_130 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_128 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_120 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_158 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_150 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_148 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_140 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_178 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_170 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_168 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_160 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = FUN__text__0019c518(&local_17c,auStack_118); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar7 = FUN__text__0019c1d8((undefined8 *)(param_1 + 0x8b40),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2 = (undefined8 *)(param_1 + 0x89c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x8b50) = param_2[2];
        *(undefined8 *)(param_1 + 0x8b58) = uVar5;
        *(undefined8 *)(param_1 + 0x8b40) = uVar3;
        *(undefined8 *)(param_1 + 0x8b48) = uVar4;
        uVar3 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x8b70) = param_2[6];
        *(undefined8 *)(param_1 + 0x8b78) = uVar5;
        *(undefined8 *)(param_1 + 0x8b60) = uVar3;
        *(undefined8 *)(param_1 + 0x8b68) = uVar4;
        uVar3 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x8b90) = param_2[10];
        *(undefined8 *)(param_1 + 0x8b98) = uVar5;
        *(undefined8 *)(param_1 + 0x8b80) = uVar3;
        *(undefined8 *)(param_1 + 0x8b88) = uVar4;
        FUN__text__0019cd08(lVar9,piVar1,*(undefined1 *)(param_1 + 0x8ba3)); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined2 *)(param_1 + 0x8ba2) = 0;
        *(undefined1 *)(param_1 + 0x89f8) = 0;
        *(undefined1 *)(param_1 + 0x8ba0) = 1;
        if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__003b17ec(*puVar2,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__003b17f8(*puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__003ad2d0(*puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0019c35c(local_b4); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar1 != local_b4[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001db72c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001d9160(*(undefined8 *)(param_1 + 0x40),0); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((*(long *)(param_1 + 0x18) != 0) && // [自动静态注释] 条件判断/分支
            (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x718), lVar8 != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (*(long *)(lVar8 + 0x168) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar6 = FUN__text__001c693c(); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001d911c(*(undefined8 *)(param_1 + 0x40),iVar6 != 0); // [自动静态注释] 调用尚未恢复正式名称的函数
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001dc250(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


