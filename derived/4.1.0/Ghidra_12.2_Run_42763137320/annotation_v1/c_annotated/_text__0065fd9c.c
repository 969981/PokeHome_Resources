/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055FD9C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065fd9c; name: FUN_.text__0065fd9c
 */


int FUN__text__0065fd9c(undefined8 *param_1,long *param_2,long *param_3,long param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar10 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *(long *)(lVar6 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __src = (void *)*plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = plVar10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar7 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((*(byte *)(param_2[0x84] + 0x84) & 1) != 0) || ((int)param_2[0x2f] == 2)) && // [自动静态注释] 条件判断/分支
     ((int)param_2[0x46] != 0x14)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = FUN__text__0066c7d8(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar4 != 0) goto LAB__text__0065ff1c; // [自动静态注释] 条件判断/分支
    if (0x3fff < uVar11) { // [自动静态注释] 条件判断/分支
      sVar7 = 0x4000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    memcpy(*(void **)(lVar6 + 0x1138),__src,sVar7); // [自动静态注释] 内存复制、清零或移动
    __src = *(void **)(lVar6 + 0x1138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = FUN__text__00667248(param_2,uVar2,__src,sVar7,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
    uVar8 = uVar11 - param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar8 <= local_68) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = local_68 - uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((*(byte *)(lVar6 + 0xf43) >> 2 & 1) != 0) && // [自动静态注释] 条件判断/分支
       (FUN__text__00667094(lVar6,2,__src,uVar1), uVar8 < uVar3)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00667094(lVar6,4,(long)__src + uVar1,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_3 = *param_3 + local_68;
    if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
      if (local_68 != uVar11) { // [自动静态注释] 条件判断/分支
        return 0x37; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00665998(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(lVar6 + 0x108) = *(long *)(lVar6 + 0x108) + lVar5;
      FUN__text__0066667c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (uVar11 - local_68 != 0) { // [自动静态注释] 条件判断/分支
        lVar5 = *plVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar9 + 0x1e8) = *(undefined8 *)(lVar6 + 0x1528);
        *(undefined8 *)(lVar9 + 0x1f0) = *(undefined8 *)(lVar6 + 0x1530);
        *(undefined8 *)(lVar9 + 0x1f8) = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0x200) = *(undefined8 *)(lVar9 + 8);
        *(code **)(lVar6 + 0x1528) = FUN__text__0065ff98;
        *(long **)(lVar6 + 0x1530) = param_2;
        *(ulong *)(lVar9 + 8) = uVar11 - local_68;
        *(ulong *)(lVar9 + 0x10) = lVar5 + local_68;
        *(long **)(lVar9 + 0x210) = plVar10;
        *(undefined4 *)(lVar9 + 0x208) = 1;
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(lVar9 + 0x208) = 2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0065ff1c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0065fd64(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


